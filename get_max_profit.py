def get_max_profit(stock_prices_yesterday):

    if len(stock_prices_yesterday) < 2:
        raise IndexError('Getting a profit requires at least 2 prices')

    min_price = stock_prices_yesterday[0]
    max_profit = stock_prices_yesterday[1] - stock_prices_yesterday[0]

    for index, current_price in enumerate(stock_prices_yesterday):

        if index == 0:
            continue

        potential_profit = current_price - min_price

        max_profit = max(max_profit, potential_profit)

        min_price  = min(min_price, current_price)

    return max_profit