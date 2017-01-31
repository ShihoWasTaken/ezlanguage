 #!/bin/bash

COMPILER=../bin/EZ_language_compiler

# Execute tests
echo "Test 1 : person" 
$COMPILER person.ez
echo "Test 2 : class" 
$COMPILER test_class.ez
