result=$(./mybinary 10 15 20)
if [ "$result" = "15" ]; then
	echo "Test passed";
else
	echo "Test FAILED";
	exit 1;
fi

result=$(./mybinary 10 15 25 30)
if [ "$result" = "20" ]; then
	echo "Test passed";
else
	echo "Test FAILED";
	exit 1;
fi
