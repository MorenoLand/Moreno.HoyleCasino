; FUN_00450680  00450680
00450680  PUSH EBP
00450681  MOV EBP,ESP
00450683  SUB ESP,0x2ac
00450689  PUSH ESI
0045068a  PUSH EDI
0045068b  MOV dword ptr [EBP + 0xfffffd54],ECX
00450691  MOV EAX,dword ptr [EBP + 0xfffffd54]
00450697  MOVZX ECX,byte ptr [EAX + 0x2be]
0045069e  TEST ECX,ECX
004506a0  JZ 0x004506d5
004506a2  MOV EDX,dword ptr [EBP + 0xfffffd54]
004506a8  MOVZX EAX,byte ptr [EDX + 0x2c6]
004506af  TEST EAX,EAX
004506b1  JNZ 0x004506d5
004506b3  MOV ECX,dword ptr [EBP + 0xfffffd54]
004506b9  MOVZX EDX,byte ptr [ECX + 0x2c2]
004506c0  TEST EDX,EDX
004506c2  JZ 0x004506d5
004506c4  MOV EAX,dword ptr [EBP + 0xfffffd54]
004506ca  MOVZX ECX,byte ptr [EAX + 0x2c5]
004506d1  TEST ECX,ECX
004506d3  JNZ 0x004506dc
004506d5  XOR AL,AL
004506d7  JMP 0x00450b56
004506dc  MOV dword ptr [EBP + 0xfffffd5c],0x0
004506e6  MOV dword ptr [EBP + 0xfffffd64],0x0
004506f0  MOV dword ptr [EBP + 0xfffffd60],0x0
004506fa  JMP 0x0045070b
004506fc  MOV EDX,dword ptr [EBP + 0xfffffd60]
00450702  ADD EDX,0x1
00450705  MOV dword ptr [EBP + 0xfffffd60],EDX
0045070b  CMP dword ptr [EBP + 0xfffffd60],0xf
00450712  JGE 0x00450740
00450714  MOV EAX,dword ptr [EBP + 0xfffffd60]
0045071a  IMUL EAX,EAX,0x2c
0045071d  MOV ECX,dword ptr [EBP + 0xfffffd54]
00450723  LEA ESI,[ECX + EAX*0x1 + 0x18]
00450727  MOV EDX,dword ptr [EBP + 0xfffffd60]
0045072d  IMUL EDX,EDX,0x2c
00450730  LEA EDI,[EBP + EDX*0x1 + 0xfffffd68]
00450737  MOV ECX,0xb
0045073c  MOVSD.REP ES:EDI,ESI
0045073e  JMP 0x004506fc
00450740  MOV EAX,dword ptr [EBP + 0xfffffd94]
00450746  SUB EAX,0x1
00450749  MOV dword ptr [EBP + 0xfffffd94],EAX
0045074f  MOV ECX,dword ptr [EBP + -0x30]
00450752  SUB ECX,0x1
00450755  MOV dword ptr [EBP + -0x30],ECX
00450758  MOV dword ptr [EBP + 0xfffffd60],0x8
00450762  JMP 0x00450773
00450764  MOV EDX,dword ptr [EBP + 0xfffffd60]
0045076a  SUB EDX,0x1
0045076d  MOV dword ptr [EBP + 0xfffffd60],EDX
00450773  CMP dword ptr [EBP + 0xfffffd60],0x0
0045077a  JLE 0x004508ad
00450780  MOV dword ptr [EBP + 0xfffffd64],0x0
0045078a  MOV dword ptr [EBP + 0xfffffd58],0x0
00450794  JMP 0x004507a5
00450796  MOV EAX,dword ptr [EBP + 0xfffffd58]
0045079c  ADD EAX,0x1
0045079f  MOV dword ptr [EBP + 0xfffffd58],EAX
004507a5  CMP dword ptr [EBP + 0xfffffd58],0x7
004507ac  JGE 0x00450815
004507ae  MOV ECX,dword ptr [EBP + 0xfffffd60]
004507b4  ADD ECX,dword ptr [EBP + 0xfffffd58]
004507ba  IMUL ECX,ECX,0x2c
004507bd  CMP dword ptr [EBP + ECX*0x1 + 0xfffffd68],0x0
004507c5  JZ 0x00450801
004507c7  MOV EDX,dword ptr [EBP + 0xfffffd60]
004507cd  ADD EDX,dword ptr [EBP + 0xfffffd58]
004507d3  IMUL EDX,EDX,0x2c
004507d6  LEA EAX,[EBP + EDX*0x1 + 0xfffffd68]
004507dd  MOV ECX,dword ptr [EBP + 0xfffffd54]
004507e3  MOV EDX,dword ptr [ECX + 0x2d0]
004507e9  CMP dword ptr [EAX + EDX*0x4 + 0x4],0x0
004507ee  JZ 0x00450801
004507f0  MOV EAX,dword ptr [EBP + 0xfffffd64]
004507f6  ADD EAX,0x1
004507f9  MOV dword ptr [EBP + 0xfffffd64],EAX
004507ff  JMP 0x00450813
00450801  MOV ECX,dword ptr [EBP + 0xfffffd60]
00450807  ADD ECX,dword ptr [EBP + 0xfffffd58]
0045080d  MOV dword ptr [EBP + 0xfffffd5c],ECX
00450813  JMP 0x00450796
00450815  CMP dword ptr [EBP + 0xfffffd64],0x6
0045081c  JNZ 0x004508a8
00450822  MOV EDX,dword ptr [EBP + 0xfffffd54]
00450828  MOV dword ptr [EDX + 0x344],0x7
00450832  MOV EAX,dword ptr [EBP + 0xfffffd54]
00450838  MOV ECX,dword ptr [EBP + 0xfffffd60]
0045083e  MOV dword ptr [EAX + 0x348],ECX
00450844  MOV EDX,dword ptr [EBP + 0xfffffd54]
0045084a  MOV EAX,dword ptr [EBP + 0xfffffd5c]
00450850  MOV dword ptr [EDX + 0x34c],EAX
00450856  MOV dword ptr [EBP + 0xfffffd58],0x0
00450860  JMP 0x00450871
00450862  MOV ECX,dword ptr [EBP + 0xfffffd58]
00450868  ADD ECX,0x1
0045086b  MOV dword ptr [EBP + 0xfffffd58],ECX
00450871  CMP dword ptr [EBP + 0xfffffd58],0x7
00450878  JGE 0x004508a1
0045087a  MOV EDX,dword ptr [EBP + 0xfffffd54]
00450880  MOV EAX,dword ptr [EDX + 0x348]
00450886  ADD EAX,dword ptr [EBP + 0xfffffd58]
0045088c  MOV ECX,dword ptr [EBP + 0xfffffd58]
00450892  MOV EDX,dword ptr [EBP + 0xfffffd54]
00450898  MOV dword ptr [EDX + ECX*0x4 + 0x328],EAX
0045089f  JMP 0x00450862
004508a1  MOV AL,0x1
004508a3  JMP 0x00450b56
004508a8  JMP 0x00450764
004508ad  MOV dword ptr [EBP + 0xfffffd60],0x9
004508b7  JMP 0x004508c8
004508b9  MOV EAX,dword ptr [EBP + 0xfffffd60]
004508bf  SUB EAX,0x1
004508c2  MOV dword ptr [EBP + 0xfffffd60],EAX
004508c8  CMP dword ptr [EBP + 0xfffffd60],0x0
004508cf  JLE 0x00450a02
004508d5  MOV dword ptr [EBP + 0xfffffd64],0x0
004508df  MOV dword ptr [EBP + 0xfffffd58],0x0
004508e9  JMP 0x004508fa
004508eb  MOV ECX,dword ptr [EBP + 0xfffffd58]
004508f1  ADD ECX,0x1
004508f4  MOV dword ptr [EBP + 0xfffffd58],ECX
004508fa  CMP dword ptr [EBP + 0xfffffd58],0x6
00450901  JGE 0x0045096a
00450903  MOV EDX,dword ptr [EBP + 0xfffffd60]
00450909  ADD EDX,dword ptr [EBP + 0xfffffd58]
0045090f  IMUL EDX,EDX,0x2c
00450912  CMP dword ptr [EBP + EDX*0x1 + 0xfffffd68],0x0
0045091a  JZ 0x00450956
0045091c  MOV EAX,dword ptr [EBP + 0xfffffd60]
00450922  ADD EAX,dword ptr [EBP + 0xfffffd58]
00450928  IMUL EAX,EAX,0x2c
0045092b  LEA ECX,[EBP + EAX*0x1 + 0xfffffd68]
00450932  MOV EDX,dword ptr [EBP + 0xfffffd54]
00450938  MOV EAX,dword ptr [EDX + 0x2d0]
0045093e  CMP dword ptr [ECX + EAX*0x4 + 0x4],0x0
00450943  JZ 0x00450956
00450945  MOV ECX,dword ptr [EBP + 0xfffffd64]
0045094b  ADD ECX,0x1
0045094e  MOV dword ptr [EBP + 0xfffffd64],ECX
00450954  JMP 0x00450968
00450956  MOV EDX,dword ptr [EBP + 0xfffffd60]
0045095c  ADD EDX,dword ptr [EBP + 0xfffffd58]
00450962  MOV dword ptr [EBP + 0xfffffd5c],EDX
00450968  JMP 0x004508eb
0045096a  CMP dword ptr [EBP + 0xfffffd64],0x5
00450971  JNZ 0x004509fd
00450977  MOV EAX,dword ptr [EBP + 0xfffffd54]
0045097d  MOV dword ptr [EAX + 0x344],0x6
00450987  MOV ECX,dword ptr [EBP + 0xfffffd54]
0045098d  MOV EDX,dword ptr [EBP + 0xfffffd60]
00450993  MOV dword ptr [ECX + 0x348],EDX
00450999  MOV EAX,dword ptr [EBP + 0xfffffd54]
0045099f  MOV ECX,dword ptr [EBP + 0xfffffd5c]
004509a5  MOV dword ptr [EAX + 0x34c],ECX
004509ab  MOV dword ptr [EBP + 0xfffffd58],0x0
004509b5  JMP 0x004509c6
004509b7  MOV EDX,dword ptr [EBP + 0xfffffd58]
004509bd  ADD EDX,0x1
004509c0  MOV dword ptr [EBP + 0xfffffd58],EDX
004509c6  CMP dword ptr [EBP + 0xfffffd58],0x6
004509cd  JGE 0x004509f6
004509cf  MOV EAX,dword ptr [EBP + 0xfffffd54]
004509d5  MOV ECX,dword ptr [EAX + 0x348]
004509db  ADD ECX,dword ptr [EBP + 0xfffffd58]
004509e1  MOV EDX,dword ptr [EBP + 0xfffffd58]
004509e7  MOV EAX,dword ptr [EBP + 0xfffffd54]
004509ed  MOV dword ptr [EAX + EDX*0x4 + 0x328],ECX
004509f4  JMP 0x004509b7
004509f6  MOV AL,0x1
004509f8  JMP 0x00450b56
004509fd  JMP 0x004508b9
00450a02  MOV dword ptr [EBP + 0xfffffd60],0xa
00450a0c  JMP 0x00450a1d
00450a0e  MOV ECX,dword ptr [EBP + 0xfffffd60]
00450a14  SUB ECX,0x1
00450a17  MOV dword ptr [EBP + 0xfffffd60],ECX
00450a1d  CMP dword ptr [EBP + 0xfffffd60],0x0
00450a24  JLE 0x00450b54
00450a2a  MOV dword ptr [EBP + 0xfffffd64],0x0
00450a34  MOV dword ptr [EBP + 0xfffffd58],0x0
00450a3e  JMP 0x00450a4f
00450a40  MOV EDX,dword ptr [EBP + 0xfffffd58]
00450a46  ADD EDX,0x1
00450a49  MOV dword ptr [EBP + 0xfffffd58],EDX
00450a4f  CMP dword ptr [EBP + 0xfffffd58],0x5
00450a56  JGE 0x00450abf
00450a58  MOV EAX,dword ptr [EBP + 0xfffffd60]
00450a5e  ADD EAX,dword ptr [EBP + 0xfffffd58]
00450a64  IMUL EAX,EAX,0x2c
00450a67  CMP dword ptr [EBP + EAX*0x1 + 0xfffffd68],0x0
00450a6f  JZ 0x00450aab
00450a71  MOV ECX,dword ptr [EBP + 0xfffffd60]
00450a77  ADD ECX,dword ptr [EBP + 0xfffffd58]
00450a7d  IMUL ECX,ECX,0x2c
00450a80  LEA EDX,[EBP + ECX*0x1 + 0xfffffd68]
00450a87  MOV EAX,dword ptr [EBP + 0xfffffd54]
00450a8d  MOV ECX,dword ptr [EAX + 0x2d0]
00450a93  CMP dword ptr [EDX + ECX*0x4 + 0x4],0x0
00450a98  JZ 0x00450aab
00450a9a  MOV EDX,dword ptr [EBP + 0xfffffd64]
00450aa0  ADD EDX,0x1
00450aa3  MOV dword ptr [EBP + 0xfffffd64],EDX
00450aa9  JMP 0x00450abd
00450aab  MOV EAX,dword ptr [EBP + 0xfffffd60]
00450ab1  ADD EAX,dword ptr [EBP + 0xfffffd58]
00450ab7  MOV dword ptr [EBP + 0xfffffd5c],EAX
00450abd  JMP 0x00450a40
00450abf  CMP dword ptr [EBP + 0xfffffd64],0x4
00450ac6  JNZ 0x00450b4f
00450acc  MOV ECX,dword ptr [EBP + 0xfffffd54]
00450ad2  MOV dword ptr [ECX + 0x344],0x5
00450adc  MOV EDX,dword ptr [EBP + 0xfffffd54]
00450ae2  MOV EAX,dword ptr [EBP + 0xfffffd60]
00450ae8  MOV dword ptr [EDX + 0x348],EAX
00450aee  MOV ECX,dword ptr [EBP + 0xfffffd54]
00450af4  MOV EDX,dword ptr [EBP + 0xfffffd5c]
00450afa  MOV dword ptr [ECX + 0x34c],EDX
00450b00  MOV dword ptr [EBP + 0xfffffd58],0x0
00450b0a  JMP 0x00450b1b
00450b0c  MOV EAX,dword ptr [EBP + 0xfffffd58]
00450b12  ADD EAX,0x1
00450b15  MOV dword ptr [EBP + 0xfffffd58],EAX
00450b1b  CMP dword ptr [EBP + 0xfffffd58],0x5
00450b22  JGE 0x00450b4b
00450b24  MOV ECX,dword ptr [EBP + 0xfffffd54]
00450b2a  MOV EDX,dword ptr [ECX + 0x348]
00450b30  ADD EDX,dword ptr [EBP + 0xfffffd58]
00450b36  MOV EAX,dword ptr [EBP + 0xfffffd58]
00450b3c  MOV ECX,dword ptr [EBP + 0xfffffd54]
00450b42  MOV dword ptr [ECX + EAX*0x4 + 0x328],EDX
00450b49  JMP 0x00450b0c
00450b4b  MOV AL,0x1
00450b4d  JMP 0x00450b56
00450b4f  JMP 0x00450a0e
00450b54  XOR AL,AL
00450b56  POP EDI
00450b57  POP ESI
00450b58  MOV ESP,EBP
00450b5a  POP EBP
00450b5b  RET
