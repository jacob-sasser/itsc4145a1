#! /bin/bash
#SBATCH --job-name=MergeSort
#SBATCH --partition=Centaurus
#SBATCH --time=01:00:00
#SBATCH --mem=32G
$HOME/itsc4145a1/merge_sort/g++ main.cpp -o main.exe
$HOME/itsc4145a1/merge_sort/main.exe 1
