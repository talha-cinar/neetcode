fn main() 
{
    let v = vec![-1,0,1,2,-1,-4];
    //let v = vec![0,1,1];
    //let v = vec![0,0,0];
    let result = three_int_sum(v);
    println!("{:?}", result);

}

fn three_int_sum( mut v: Vec<i32>) -> Vec<Vec<i32>>
{
    v.sort();
    let mut result : Vec<Vec<i32>> = Vec::new(); 
    let n = v.len();
    for i in (0..n-1).rev()
    {
        let mut rightp = n-1;
        let mut leftp = i+1;
        while rightp > leftp
        {
            let sum = v[i]+ v[rightp] + v[leftp];
            if sum == 0
            {
                result.push(vec![v[i],v[rightp],v[leftp]]);
                break;
            }
            else if sum > 0
            {
                rightp -=1;
            }
            else
            {
                leftp +=1;
            }
        }
    }
    result
}
