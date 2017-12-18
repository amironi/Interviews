def get_max_profit(stock_prices_yesterday):

    if len(stock_prices_yesterday) < 2:
        raise IndexError('Getting a profit requires at least 2 prices')

    min_price = stock_prices_yesterday[0]
    max_profit = stock_prices_yesterday[1] - stock_prices_yesterday[0]

    for index, current_price in enumerate(stock_prices_yesterday):

        if index == 0:
            continue

        potential_profit = 

        max_profit = max(max_profit, current_price - min_price)

        min_price  = min(min_price, current_price)

    return max_profit


int max_profit(const vector<int>& stock)
{
  int min_stock = stock[0]; 

  int max_profit = stock[1];
  
  for( int i = 2; i < stock.size(); i++ )
  {
    max_profit = max(max_profit, stock[i] - min_stock);

    min_stock = min(min_stock, stock[i]);
  }
  
  return max_profit;

}

