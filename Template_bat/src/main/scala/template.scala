import spinal.core._


class template extends Module {


}


object template extends App {
  SpinalConfig(
    mode = Verilog,
    targetDirectory = "./RTL_verilog_code"
  ).generate(new template)
}
