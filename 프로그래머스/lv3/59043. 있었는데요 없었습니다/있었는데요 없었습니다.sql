-- 코드를 입력하세요
SELECT I.ANIMAL_ID, I.NAME
FROM ANIMAL_INS AS I, ANIMAL_OUTS AS O
WHERE I.ANIMAL_ID = O.ANIMAL_ID
AND I.DATETIME > O.DATETIME
ORDER BY I.DATETIME ASC;
