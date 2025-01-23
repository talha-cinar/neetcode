fn main() 
{
    let prices1 = vec![10,1,5,6,7,1];
    let prices2 = vec![10,8,7,5,2];
    let prices3 = vec![10,2,11,8,1,9];
    let result1= max_profit(prices1);
    let result2= max_profit(prices2);
    let result3= max_profit(prices3);
    println!("result1 = {:?}",result1);
    println!("result2 = {:?}",result2);
    println!("result3 = {:?}",result3);
}

fn max_profit(prices : Vec<i32>) -> i32
{
    let n = prices.len();
    let mut i = 0;
    let mut j =1;
    let mut max_profit =0;

    while j<n
    {
        let profit = prices[j] -prices[i];
        if profit < 0
        {
            i =j;
            j+=1;
        }
        else
        {
            if profit > max_profit 
            {
                max_profit = profit;
            }
            j+=1;
        }
    }
    max_profit
}
