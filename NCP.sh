#!/bin/bash
#PBS -l nodes=1:intel:ppn=8, mem=64gb
#PBS -l walltime=00:10:00
#PBS -M n.copete@uniandes.edu.co
#PBS -m abe
#PBS -N ncpexo26
#PBS -j oe

module load anaconda/python3
c++ -o cuenta.x cuenta.c
part=100
split -n part Pi_2500000.txt subfile_n 
for file in subfile_*; do ./cuenta.x ${file} cuenta.txt tiempo.txt ; done

