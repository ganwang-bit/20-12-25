###>>> while i<=6:
###	print(str(i*j)+' '+str(i*(j+1))+' '+str(i*(j+2)))
###	i+=1
###
###	
###1 2 3
###2 4 6
###3 6 9
###4 8 12
###5 10 15
###6 12 18
###>>> i=1
###>>> while i<=6:
###	print(str(i*j)+'\t'+str(i*(j+1))+'\t'+str(i*(j+2)))
###	i+=1
###
###	
###1	2	3
###2	4	6
###3	6	9
###4	8	12
###5	10	15
###6	12      18
###>>>
###
###>>> i=1
###>>> j=1
###>>> while i<=50:
###	if i%2==0:
###		print(i,end='\t')
###		j+=1
###	if (j-1)%5==0:
###		print()
###	i+=1
###
###	
###
###2	4	6	8	10	
###
###12	14	16	18	20	
###
###22	24	26	28	30	
###
###32	34	36	38	40	
###
###42	44	46	48	50	
###>>> 
##>>> i=1
##>>> while i<=100:
##	if(i%7==0 and i%5!=0):
##		print(i,end=' ')
##	i+=1
##
##	
##7 14 21 28 42 49 56 63 77 84 91 98
##>>> sm=0
##>>> count=0
##>>> while True:
##	n=eval(input("璇疯�鍏ヤ竴涓鎴愮�"))
##	sm+=n
##	count+=1
##	n=input("鏄鍚﹁緭鍏ヤ笅涓涓鎴�� Y/N")
##	if n.lower()=='n':
##		print(sm/count)
##		break
##import random
##def code(lenth):
##	a=[0,1,2,3,4,5,6,7,8,9]
##	b=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
##	c=list(''.join(b).upper())
##	d=[a,b,c]
##	for i in range(lenth):
##		print(random.choice(random.choice(d)),end='')
#>>> a=[1,2,3,4,5,6]
#>>> b=list(map(lambda x:x%9 ,a))
#>>> b
#[1, 2, 3, 4, 5, 6]
#>>> a
#[1, 2, 3, 4, 5, 6]
#>>> a=[10,20,30,40,40,50,505,5,90]
#>>> b=list(map(lambda x:x%9,a[-5:]))
#>>> b
#[4, 5, 1, 5, 0]
#>>> 
