import spinal.core._


class template(sys_clk: Int, baund: Int) extends Module {

  val max_baund_cnt = sys_clk / baund - 1

  val io = new Bundle {
    val clk = in Bool()
    val rst_n = in Bool()
    val start = in Bool()
    val data = in Bits (8 bits)

    val rs232_tx = out Bool()
    val done = out Bool()
  }

  val clkconfig = ClockDomainConfig(clockEdge = RISING, resetKind = ASYNC, resetActiveLevel = LOW)
  val clkdmi = ClockDomain(clock = io.clk, reset = io.rst_n, config = clkconfig)
  //=============================data_bat=============================================
  val clkarea = new ClockingArea(clkdmi) {
    val data_bat = Reg(Bits(8 bits)) init (0)
    when(io.start) {
      data_bat := io.data
    } otherwise {
      data_bat := data_bat
    }

    //====================================state============================================

    val state = Reg(Bool()) init (False)

    when(io.start) {
      state := True
    } elsewhen (io.done) {
      state := False
    } otherwise {
      state := state
    }

    //===========================baud_cnt======================================================

    val baud_cnt = Reg(UInt(10 bits)) init (0)

    when(state) {
      when(baud_cnt === max_baund_cnt) {
        baud_cnt := 0
      } otherwise {
        baud_cnt := baud_cnt + 1
      }
    } otherwise {
      baud_cnt := 0
    }

    //===============================bit_flag=========================================

    val bit_flag = Reg(Bool()) init (False)

    when(baud_cnt === 1) {
      bit_flag := True
    } otherwise {
      bit_flag := False
    }

    //==============================bit_cnt============================================

    val bit_cnt = Reg(UInt(4 bits)) init (0)

    when(bit_flag) {
      when(bit_cnt === 10) {
        bit_cnt := 0
      } otherwise {
        bit_cnt := bit_cnt + 1
      }
    } otherwise {
      bit_cnt := bit_cnt
    }

    //=================================rx232_tx==========================================

    val rx232_tx = Reg(Bool()) init (False)

    when(state) {
      when(bit_flag) {
        switch(bit_cnt) {
          is(0) {
            rx232_tx := False
          }
          is(1) {
            rx232_tx := data_bat(0)
          }
          is(2) {
            rx232_tx := data_bat(1)
          }
          is(3) {
            rx232_tx := data_bat(2)
          }
          is(4) {
            rx232_tx := data_bat(3)
          }
          is(5) {
            rx232_tx := data_bat(4)
          }
          is(6) {
            rx232_tx := data_bat(5)
          }
          is(7) {
            rx232_tx := data_bat(6)
          }
          is(8) {
            rx232_tx := data_bat(7)
          }
          is(9) {
            rx232_tx := True
          }
          default {
            rx232_tx := True
          }
        }
      }
    } otherwise {
      rx232_tx := True
    }
    io.rs232_tx := rx232_tx

    //===================================done=========================================

    val done = Reg(Bool()) init (False)

    when(bit_flag && bit_cnt === 10) {
      done := True
    } otherwise {
      done := False
    }
    io.done := done
  }

}


object template extends App {

  SpinalConfig(
    mode = Verilog,
    targetDirectory = "./RTL_verilog_code"
  ).generate(new template(27000000, 115200))

  import spinal.core.sim._

  SimConfig.withWave.workspacePath("./RTL_SIM").compile(new template(27000000, 115200)).doSim { dut =>

    dut.clkdmi.forkStimulus(10)

    sleep(200)
    dut.io.data #= 55
    dut.io.start #= true
    sleep(20)
    dut.io.start #= false
    sleep(60000)


    simSuccess()
  }

}
