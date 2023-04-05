-- 코드를 입력하세요
SELECT USER_ID, PRODUCT_ID
FROM ONLINE_SALE
GROUP BY USER_ID,PRODUCT_ID
HAVING COUNT(USER_ID) >= 2
ORDER BY USER_ID, PRODUCT_ID DESC;



/*SELECT user_id, product_id
FROM online_sale
GROUP BY user_id, product_id
HAVING COUNT(user_id) >= 2
ORDER BY user_id ASC, product_id DESC*/