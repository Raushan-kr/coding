echo "input how many number to get their average "
read number
sum=0
average=0
for ((i=1;i<=$number;i++))
do 
 echo "enter the number to get their average"
 read x
 sum = $sum + $x
done
average= $sum/$number
echo "average is:$average" 