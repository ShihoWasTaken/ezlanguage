#!/bin/bash

COMPILER=../bin/EZ_language_compiler

# Execute tests
echo "Test 1 : empty_program"
$COMPILER empty_program.ez
echo "Test 2 : example"
$COMPILER example.ez
echo "Test 3 : affectations_calculs"
$COMPILER affectations_calculs.ezl

