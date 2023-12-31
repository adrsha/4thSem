MOV A, 25H
MOV B, 48H

; Subtract B from A
MOV C, B
MOV B, A
MOV A, C

SUB B

MOV H, A

; Resets the positions back as the quesiton was

MOV A, B
MOV B, C

; Swap again
