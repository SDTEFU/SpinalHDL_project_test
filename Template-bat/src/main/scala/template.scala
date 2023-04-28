import spinal.core._

class template extends Module {
  val io = new Bundle {
    val inin = in Bool()
    val outout = out Bool()
  }
  io.outout := io.inin
}

object template {
  def main(args: Array[String]): Unit = {
    SpinalVerilog(new template)
  }
}
