#!/bin/bash
current_hour=$(date +%H)

log_ls(){
    ls -la > ls_output.txt
}

show_time(){
    date "+%Y-%m-%d %H:%M"
}

if [ $current_hour -lt 12 ]; then 
    log_ls
else 
    show_time
fi