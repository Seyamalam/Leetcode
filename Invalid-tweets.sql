SELECT tweet_id 
FROM Tweets
WHERE character_length(content)> 15;