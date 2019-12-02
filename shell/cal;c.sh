
echo "operations  are:"
echo "1.sum"
echo "2.substract"
echo "3.multiply"
echo "4.divide"

echo "input the opration you want to perform"
read op

echo "the  first number"
read a
echo "the secomnd number"
read b
if ((op == '1'))
then
s = (($a + $b))
echo $s
fi
if ((op == '2'))
then
s = (($a - $b))
echo $s
fi
if ((op == '3'))
then
s = (($a * $b))
echo $s
fi
if ((op == '4'))
then
s = (($a / $b))
echo $s
fi