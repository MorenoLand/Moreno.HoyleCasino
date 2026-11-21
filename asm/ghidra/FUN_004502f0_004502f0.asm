; FUN_004502f0  004502f0
004502f0  PUSH EBP
004502f1  MOV EBP,ESP
004502f3  SUB ESP,0x2b0
004502f9  PUSH ESI
004502fa  PUSH EDI
004502fb  MOV dword ptr [EBP + 0xfffffd50],ECX
00450301  MOV EAX,dword ptr [EBP + 0xfffffd50]
00450307  MOVZX ECX,byte ptr [EAX + 0x2c3]
0045030e  TEST ECX,ECX
00450310  JZ 0x00450323
00450312  MOV EDX,dword ptr [EBP + 0xfffffd50]
00450318  MOVZX EAX,byte ptr [EDX + 0x2c0]
0045031f  TEST EAX,EAX
00450321  JNZ 0x0045032a
00450323  XOR AL,AL
00450325  JMP 0x00450673
0045032a  MOV dword ptr [EBP + 0xfffffd58],0x0
00450334  MOV dword ptr [EBP + 0xfffffd5c],0x0
0045033e  MOV dword ptr [EBP + 0xfffffd60],0x0
00450348  MOV dword ptr [EBP + 0xfffffd54],0x0
00450352  MOV dword ptr [EBP + 0xfffffd64],0x0
0045035c  JMP 0x0045036d
0045035e  MOV ECX,dword ptr [EBP + 0xfffffd64]
00450364  ADD ECX,0x1
00450367  MOV dword ptr [EBP + 0xfffffd64],ECX
0045036d  CMP dword ptr [EBP + 0xfffffd64],0xf
00450374  JGE 0x004503a2
00450376  MOV EDX,dword ptr [EBP + 0xfffffd64]
0045037c  IMUL EDX,EDX,0x2c
0045037f  MOV EAX,dword ptr [EBP + 0xfffffd50]
00450385  LEA ESI,[EAX + EDX*0x1 + 0x18]
00450389  MOV ECX,dword ptr [EBP + 0xfffffd64]
0045038f  IMUL ECX,ECX,0x2c
00450392  LEA EDI,[EBP + ECX*0x1 + 0xfffffd68]
00450399  MOV ECX,0xb
0045039e  MOVSD.REP ES:EDI,ESI
004503a0  JMP 0x0045035e
004503a2  MOV EDX,dword ptr [EBP + 0xfffffd50]
004503a8  MOVZX EAX,byte ptr [EDX + 0x2be]
004503af  TEST EAX,EAX
004503b1  JZ 0x004503cb
004503b3  MOV ECX,dword ptr [EBP + 0xfffffd94]
004503b9  SUB ECX,0x1
004503bc  MOV dword ptr [EBP + 0xfffffd94],ECX
004503c2  MOV EDX,dword ptr [EBP + -0x30]
004503c5  SUB EDX,0x1
004503c8  MOV dword ptr [EBP + -0x30],EDX
004503cb  MOV dword ptr [EBP + 0xfffffd64],0x0
004503d5  JMP 0x004503e6
004503d7  MOV EAX,dword ptr [EBP + 0xfffffd64]
004503dd  ADD EAX,0x1
004503e0  MOV dword ptr [EBP + 0xfffffd64],EAX
004503e6  MOV ECX,dword ptr [EBP + 0xfffffd50]
004503ec  MOV EDX,dword ptr [EBP + 0xfffffd64]
004503f2  CMP EDX,dword ptr [ECX + 0x2f4]
004503f8  JGE 0x0045049b
004503fe  MOV EAX,dword ptr [EBP + 0xfffffd64]
00450404  MOV ECX,dword ptr [EBP + 0xfffffd50]
0045040a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x2d8]
00450411  IMUL EDX,EDX,0x2c
00450414  LEA EAX,[EBP + EDX*0x1 + 0xfffffd68]
0045041b  MOV ECX,dword ptr [EBP + 0xfffffd50]
00450421  MOV EDX,dword ptr [ECX + 0x2d0]
00450427  CMP dword ptr [EAX + EDX*0x4 + 0x4],0x0
0045042c  JZ 0x00450482
0045042e  CMP dword ptr [EBP + 0xfffffd54],0x0
00450435  JNZ 0x00450450
00450437  MOV EAX,dword ptr [EBP + 0xfffffd64]
0045043d  MOV ECX,dword ptr [EBP + 0xfffffd50]
00450443  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x2d8]
0045044a  MOV dword ptr [EBP + 0xfffffd5c],EDX
00450450  MOV EAX,dword ptr [EBP + 0xfffffd54]
00450456  ADD EAX,0x1
00450459  MOV dword ptr [EBP + 0xfffffd54],EAX
0045045f  CMP dword ptr [EBP + 0xfffffd54],0x5
00450466  JL 0x00450480
00450468  MOV ECX,dword ptr [EBP + 0xfffffd54]
0045046e  MOV dword ptr [EBP + 0xfffffd60],ECX
00450474  MOV EDX,dword ptr [EBP + 0xfffffd5c]
0045047a  MOV dword ptr [EBP + 0xfffffd58],EDX
00450480  JMP 0x00450496
00450482  MOV dword ptr [EBP + 0xfffffd54],0x0
0045048c  MOV dword ptr [EBP + 0xfffffd5c],0x0
00450496  JMP 0x004503d7
0045049b  CMP dword ptr [EBP + 0xfffffd60],0x0
004504a2  JZ 0x00450671
004504a8  MOV EAX,dword ptr [EBP + 0xfffffd50]
004504ae  MOV ECX,dword ptr [EBP + 0xfffffd60]
004504b4  MOV dword ptr [EAX + 0x344],ECX
004504ba  MOV EDX,dword ptr [EBP + 0xfffffd50]
004504c0  MOV EAX,dword ptr [EBP + 0xfffffd58]
004504c6  MOV dword ptr [EDX + 0x348],EAX
004504cc  MOV ECX,dword ptr [EBP + 0xfffffd50]
004504d2  MOVZX EDX,byte ptr [ECX + 0x2be]
004504d9  TEST EDX,EDX
004504db  JZ 0x00450617
004504e1  MOV EAX,dword ptr [EBP + 0xfffffd60]
004504e7  MOV ECX,dword ptr [EBP + 0xfffffd58]
004504ed  LEA EDX,[ECX + EAX*0x1 + -0x1]
004504f1  CMP EDX,0xe
004504f4  JNZ 0x0045058e
004504fa  MOV EAX,dword ptr [EBP + 0xfffffd58]
00450500  SUB EAX,0x1
00450503  MOV ECX,dword ptr [EBP + 0xfffffd50]
00450509  MOV dword ptr [ECX + 0x34c],EAX
0045050f  MOV EDX,dword ptr [EBP + 0xfffffd50]
00450515  MOV EAX,dword ptr [EDX + 0x348]
0045051b  SUB EAX,0x1
0045051e  MOV ECX,dword ptr [EBP + 0xfffffd50]
00450524  MOV dword ptr [ECX + 0x348],EAX
0045052a  MOV EDX,dword ptr [EBP + 0xfffffd50]
00450530  MOV EAX,dword ptr [EDX + 0x34c]
00450536  SUB EAX,0x1
00450539  IMUL EAX,EAX,0x2c
0045053c  LEA ECX,[EBP + EAX*0x1 + 0xfffffd68]
00450543  MOV EDX,dword ptr [EBP + 0xfffffd50]
00450549  MOV EAX,dword ptr [EDX + 0x2d0]
0045054f  CMP dword ptr [ECX + EAX*0x4 + 0x4],0x0
00450554  JZ 0x0045058c
00450556  MOV ECX,dword ptr [EBP + 0xfffffd50]
0045055c  MOV EDX,dword ptr [ECX + 0x348]
00450562  SUB EDX,0x1
00450565  MOV EAX,dword ptr [EBP + 0xfffffd50]
0045056b  MOV dword ptr [EAX + 0x348],EDX
00450571  MOV ECX,dword ptr [EBP + 0xfffffd50]
00450577  MOV EDX,dword ptr [ECX + 0x344]
0045057d  ADD EDX,0x1
00450580  MOV EAX,dword ptr [EBP + 0xfffffd50]
00450586  MOV dword ptr [EAX + 0x344],EDX
0045058c  JMP 0x004505fc
0045058e  MOV ECX,dword ptr [EBP + 0xfffffd58]
00450594  ADD ECX,dword ptr [EBP + 0xfffffd60]
0045059a  MOV EDX,dword ptr [EBP + 0xfffffd50]
004505a0  MOV dword ptr [EDX + 0x34c],ECX
004505a6  MOV EAX,dword ptr [EBP + 0xfffffd50]
004505ac  CMP dword ptr [EAX + 0x34c],0xe
004505b3  JZ 0x004505fc
004505b5  MOV ECX,dword ptr [EBP + 0xfffffd50]
004505bb  MOV EDX,dword ptr [ECX + 0x34c]
004505c1  ADD EDX,0x1
004505c4  IMUL EDX,EDX,0x2c
004505c7  LEA EAX,[EBP + EDX*0x1 + 0xfffffd68]
004505ce  MOV ECX,dword ptr [EBP + 0xfffffd50]
004505d4  MOV EDX,dword ptr [ECX + 0x2d0]
004505da  CMP dword ptr [EAX + EDX*0x4 + 0x4],0x0
004505df  JZ 0x004505fc
004505e1  MOV EAX,dword ptr [EBP + 0xfffffd50]
004505e7  MOV ECX,dword ptr [EAX + 0x344]
004505ed  ADD ECX,0x1
004505f0  MOV EDX,dword ptr [EBP + 0xfffffd50]
004505f6  MOV dword ptr [EDX + 0x344],ECX
004505fc  MOV EAX,dword ptr [EBP + 0xfffffd50]
00450602  MOV ECX,dword ptr [EAX + 0x344]
00450608  ADD ECX,0x1
0045060b  MOV EDX,dword ptr [EBP + 0xfffffd50]
00450611  MOV dword ptr [EDX + 0x344],ECX
00450617  MOV dword ptr [EBP + 0xfffffd64],0x0
00450621  JMP 0x00450632
00450623  MOV EAX,dword ptr [EBP + 0xfffffd64]
00450629  ADD EAX,0x1
0045062c  MOV dword ptr [EBP + 0xfffffd64],EAX
00450632  MOV ECX,dword ptr [EBP + 0xfffffd50]
00450638  MOV EDX,dword ptr [EBP + 0xfffffd64]
0045063e  CMP EDX,dword ptr [ECX + 0x344]
00450644  JGE 0x0045066d
00450646  MOV EAX,dword ptr [EBP + 0xfffffd50]
0045064c  MOV ECX,dword ptr [EAX + 0x348]
00450652  ADD ECX,dword ptr [EBP + 0xfffffd64]
00450658  MOV EDX,dword ptr [EBP + 0xfffffd64]
0045065e  MOV EAX,dword ptr [EBP + 0xfffffd50]
00450664  MOV dword ptr [EAX + EDX*0x4 + 0x328],ECX
0045066b  JMP 0x00450623
0045066d  MOV AL,0x1
0045066f  JMP 0x00450673
00450671  XOR AL,AL
00450673  POP EDI
00450674  POP ESI
00450675  MOV ESP,EBP
00450677  POP EBP
00450678  RET
