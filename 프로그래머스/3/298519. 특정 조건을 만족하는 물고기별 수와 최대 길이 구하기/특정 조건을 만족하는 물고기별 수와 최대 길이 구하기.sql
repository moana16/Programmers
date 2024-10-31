-- 코드를 작성해주세요
SELECT COUNT(*) AS FISH_COUNT, MAX(CASE WHEN LENGTH <= 10 THEN 10 ELSE LENGTH END) AS MAX_LENGTH , FISH_TYPE
FROM FISH_INFO
GROUP BY FISH_TYPE
HAVING AVG(CASE WHEN LENGTH IS NULL OR LENGTH <= 10 THEN 10 ELSE LENGTH END) >= 33
ORDER BY FISH_TYPE ASC;

