Apriori algorithm refers to the algorithm which is used to calculate the association rules between objects. It means how two or more objects are related to one another. In other words, we can say that the apriori algorithm is an association rule leaning that analyzes that people who bought product A also bought product B.

The primary objective of the apriori algorithm is to create the association rule between different objects. The association rule describes how two or more objects are related to one another. Apriori algorithm is also called frequent pattern mining.

Components of Apriori algorithm
The given three components comprise the apriori algorithm.

Support
Confidence
Lift

Support
Support refers to the default popularity of any product. You find the support as a quotient of the division of the number of transactions comprising that product by the total number of transactions. Hence, we get

Support (Biscuits) = (Transactions relating biscuits) / (Total transactions)

= 400/4000 = 10 percent.

Confidence
Confidence refers to the possibility that the customers bought both biscuits and chocolates together. So, you need to divide the number of transactions that comprise both biscuits and chocolates by the total number of transactions to get the confidence.

Hence,

Confidence = (Transactions relating both biscuits and Chocolate) / (Total transactions involving Biscuits)

= 200/400

= 50 percent.

It means that 50 percent of customers who bought biscuits bought chocolates also.

Lift
Consider the above example; lift refers to the increase in the ratio of the sale of chocolates when you sell biscuits. The mathematical equations of lift are given below.

Lift = (Confidence (Biscuits - chocolates)/ (Support (Biscuits)

ADVERTISEMENT

= 50/10 = 5

It means that the probability of people buying both biscuits and chocolates together is five times more than that of purchasing the biscuits alone. If the lift value is below one, it requires that the people are unlikely to buy both the items together. Larger the value, the better is the combination.

 Enter items from purchase 1:1
5
2
0
0
 
 Enter items from purchase 2:2
3
4
1
0
 
 Enter items from purchase 3:3
4
0
0
0
 
 Enter items from purchase 4:2
1
3
0
0
 
 Enter items from purchase 5:1
2
3
0
0
 
 Enter minimum acceptance level3
 
Initial Input:
 
Trasaction      Items
1:      1       5       2       0       0
2:      2       3       4       1       0
3:      3       4       0       0       0
4:      2       1       3       0       0
5:      1       2       3       0       0
 
Assume minimum support: 3
 
Generating C1 from data
1: 4
2: 4
3: 4
4: 2
5: 1
 
Generating L1 From C1
1       4
2       4
3       4
 
 
Generating L2
1       2       4
1       3       3
2       3       3
 
 
Generating L3
1       2       3       3
