uart tx


in tx_clock
in start   rasing
in data[7:0]
out rx232_tx
out done

- data_bat        : backup data
- baud_cnt [15:0 ]: max_baund_cnt is sys_clock/baud if baud_cnt equal max_baund_cnt transmit one bit data
- bit_cnt         : count uart transmit bit number  max 10 bits
- bit_flag        : the bit transmit flag when baud_cnt equal 1 assignments 1 otherwise assignments 0 
- start_state     : start signal state

start bit = 0
end bit = 1
baund = 115200
=====================================================logic==================================================================


(tx_clock and start) rising than do

if(start rising & start_state == 0){
    start_state = 1     // start transmit
    data_bat = data     //backup data
}

if(start_state == 1){                //start uart transmit 
     
    if (baud_cnt == max_baud_cnt){   //transmit one bit data
        baud_cnt = 0
        if(bit_cnt==0){rx232_tx=0}  //start transmit bit
        else if(bit_cnt==9){rx232_tx=1} //end transmit bit
        else rx232_tx = data_bat[bit_cnt]
        bit_cnt = bit_cnt +1
    }


    if(bit_cnt == 9){
        bit_cnt = 0
        start_state = 0    //end transmit
        done = 1           
    }
    
    if(done == 1){
        done = 0
    }

}