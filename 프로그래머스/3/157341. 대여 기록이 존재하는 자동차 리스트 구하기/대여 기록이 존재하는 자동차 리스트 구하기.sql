-- 코드를 입력하세요
SELECT CAR_ID
FROM CAR_RENTAL_COMPANY_CAR
JOIN CAR_RENTAL_COMPANY_RENTAL_HISTORY
USING(CAR_ID)
WHERE START_DATE LIKE '2022-10-%'
AND CAR_TYPE = '세단'
GROUP BY CAR_ID
ORDER BY CAR_ID DESC;