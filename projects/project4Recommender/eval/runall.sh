#!/bin/bash

# Remove initial output file
rm -f output

# Compile files and redirect output to compilation_output.txt
g++ -Wall RecommendTester1.cpp Recommend.cpp -o output -std=c++17


if [ -f output ]; then
	# Loop through all test cases (manually entered)
	for i in {1..12}
	do
		# Output text to a file
		./output ${i} > compilation_output.txt

		# Now check if output file is the same as expected file
		# For cmp, 0 is returned for identical, so reverse if statement
		if cmp --silent "compilation_output.txt" "RecommendTester1_case${i}_expected_output.txt" ; then

			echo "CORRECT OUTPUT FOR TEST 1 CASE ${i}"
			cmp  compilation_output.txt "RecommendTester1_case${i}_expected_output.txt"

		else
			echo "TEST 1 CASE ${i} FAILED"
			cmp compilation_output.txt "RecommendTester1_case${i}_expected_output.txt"

			cat compilation_output.txt
			cat "RecommendTester1_case${i}_expected_output.txt"
		fi

	done

else
	echo "Compilation Failed, executable not created."
fi

# Compile files and redirect output to compilation_output.txt
g++ -Wall RecommendTester2.cpp Recommend.cpp -o output -std=c++17


if [ -f output ]; then
	# Loop through all test cases (manually entered)
	for i in {1..8}
	do
		# Output text to a file
		./output ${i} > compilation_output.txt

		# Now check if output file is the same as expected file
		# For cmp, 0 is returned for identical, so reverse if statement
		if cmp --silent "compilation_output.txt" "RecommendTester2_case${i}_expected_output.txt" ; then

			echo "CORRECT OUTPUT FOR TEST 2 CASE ${i}"
			cmp  compilation_output.txt "RecommendTester2_case${i}_expected_output.txt"

		else
			echo "TEST 1 CASE ${i} FAILED"
			cmp compilation_output.txt "RecommendTester2_case${i}_expected_output.txt"

			cat compilation_output.txt
			cat "RecommendTester2_case${i}_expected_output.txt"
		fi

	done

else
	echo "Compilation Failed, executable not created."
fi

# Compile files and redirect output to compilation_output.txt
g++ -Wall RecommendTester3.cpp Recommend.cpp -o output -std=c++17


if [ -f output ]; then
	# Loop through all test cases (manually entered)
	for i in {1..10}
	do
		# Output text to a file
		./output ${i} > compilation_output.txt

		# Now check if output file is the same as expected file
		# For cmp, 0 is returned for identical, so reverse if statement
		if cmp --silent "compilation_output.txt" "RecommendTester3_case${i}_expected_output.txt" ; then

			echo "CORRECT OUTPUT FOR TEST 3 CASE ${i}"
			cmp  compilation_output.txt "RecommendTester3_case${i}_expected_output.txt"

		else
			echo "TEST 3 CASE ${i} FAILED"
			cmp compilation_output.txt "RecommendTester3_case${i}_expected_output.txt"

			cat compilation_output.txt
			cat "RecommendTester3_case${i}_expected_output.txt"
		fi

	done

else
	echo "Compilation Failed, executable not created."
fi


# Compile files and redirect output to compilation_output.txt
g++ -Wall RecommendTester4.cpp Recommend.cpp -o output -std=c++17


if [ -f output ]; then
	# Loop through all test cases (manually entered)
	for i in {1..12}
	do
		# Output text to a file
		./output ${i} > compilation_output.txt

		# Now check if output file is the same as expected file
		# For cmp, 0 is returned for identical, so reverse if statement
		if cmp --silent "compilation_output.txt" "RecommendTester4_case${i}_expected_output.txt" ; then

			echo "CORRECT OUTPUT FOR TEST 4 CASE ${i}"
			cmp  compilation_output.txt "RecommendTester4_case${i}_expected_output.txt"

		else
			echo "TEST 1 CASE ${i} FAILED"
			cmp compilation_output.txt "RecommendTester4_case${i}_expected_output.txt"

			cat compilation_output.txt
			cat "RecommendTester4_case${i}_expected_output.txt"
		fi

	done

else
	echo "Compilation Failed, executable not created."
fi




# 12 8 10 12
