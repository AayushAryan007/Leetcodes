SELECT DISTINCT t1.*
FROM Stadium t1
CROSS JOIN Stadium t2
CROSS JOIN Stadium t3
WHERE (t1.people >= 100)
    AND (t2.people >= 100)
    AND (t3.people >= 100)
    AND (
        (
            -- Check previous 2 numbers of t1
            -- t3, t2, t1
            t1.id - t2.id = 1
            AND t1.id - t3.id = 2
            AND t2.id - t3.id = 1
            )
        OR (
            -- Check previous number and next number of t1
            -- t3, t1, t2
            t2.id - t1.id = 1
            AND t2.id - t3.id = 2
            AND t1.id - t3.id = 1
            )
        OR (
            -- Check next 2 numbers of t1
            -- t1, t2, t3
            t3.id - t2.id = 1
            AND t2.id - t1.id = 1
            AND t3.id - t1.id = 2
            )
        )
ORDER BY t1.id