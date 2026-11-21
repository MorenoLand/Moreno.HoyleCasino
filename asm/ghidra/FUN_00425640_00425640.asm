; FUN_00425640  00425640
00425640  PUSH EBP
00425641  MOV EBP,ESP
00425643  SUB ESP,0x18
00425646  MOV dword ptr [EBP + -0x18],ECX
00425649  PUSH 0x3
0042564b  MOV ECX,dword ptr [EBP + 0x8]
0042564e  CALL 0x0063aae0
00425653  MOV dword ptr [EBP + -0x4],EAX
00425656  MOV EAX,dword ptr [EBP + -0x4]
00425659  MOV ECX,dword ptr [EAX + 0x4]
0042565c  MOV EDX,dword ptr [EBP + -0x4]
0042565f  ADD ECX,dword ptr [EDX + 0xc]
00425662  MOV EAX,dword ptr [EBP + 0xc]
00425665  ADD ECX,dword ptr [EAX]
00425667  MOV EDX,dword ptr [EBP + 0xc]
0042566a  MOV dword ptr [EDX],ECX
0042566c  MOV EAX,dword ptr [EBP + 0xc]
0042566f  MOV ECX,dword ptr [EAX + 0x4]
00425672  MOV EDX,dword ptr [EBP + -0x4]
00425675  ADD ECX,dword ptr [EDX + 0x8]
00425678  MOV EAX,dword ptr [EBP + 0xc]
0042567b  MOV dword ptr [EAX + 0x4],ECX
0042567e  MOV ECX,dword ptr [EBP + 0x10]
00425681  MOV EDX,dword ptr [ECX]
00425683  MOV EAX,dword ptr [EBP + -0x4]
00425686  ADD EDX,dword ptr [EAX + 0x4]
00425689  MOV ECX,dword ptr [EBP + 0x10]
0042568c  MOV dword ptr [ECX],EDX
0042568e  MOV EDX,dword ptr [EBP + 0x10]
00425691  MOV EAX,dword ptr [EDX + 0x4]
00425694  MOV ECX,dword ptr [EBP + -0x4]
00425697  ADD EAX,dword ptr [ECX + 0x8]
0042569a  MOV EDX,dword ptr [EBP + 0x10]
0042569d  MOV dword ptr [EDX + 0x4],EAX
004256a0  MOV EAX,dword ptr [EBP + 0x14]
004256a3  MOV ECX,dword ptr [EAX]
004256a5  MOV EDX,dword ptr [EBP + -0x4]
004256a8  ADD ECX,dword ptr [EDX + 0xc]
004256ab  MOV EAX,dword ptr [EBP + 0x14]
004256ae  MOV dword ptr [EAX],ECX
004256b0  MOV ECX,dword ptr [EBP + 0x14]
004256b3  MOV EDX,dword ptr [ECX + 0x4]
004256b6  MOV EAX,dword ptr [EBP + -0x4]
004256b9  ADD EDX,dword ptr [EAX + 0x10]
004256bc  MOV ECX,dword ptr [EBP + 0x14]
004256bf  MOV dword ptr [ECX + 0x4],EDX
004256c2  PUSH -0x1
004256c4  MOV EDX,dword ptr [0x007947e0]
004256ca  MOV EAX,dword ptr [EDX]
004256cc  MOV ECX,dword ptr [0x007947e0]
004256d2  MOV EDX,dword ptr [EAX + 0x33c]
004256d8  CALL EDX
004256da  MOVZX EAX,AL
004256dd  TEST EAX,EAX
004256df  JZ 0x0042575f
004256e1  MOV ECX,dword ptr [0x0162ee84]
004256e7  CALL 0x005f3bf0
004256ec  CMP EAX,0x3
004256ef  JNZ 0x0042575f
004256f1  LEA ECX,[EBP + -0xc]
004256f4  PUSH ECX
004256f5  LEA EDX,[EBP + -0x14]
004256f8  PUSH EDX
004256f9  MOV EAX,dword ptr [EBP + 0x8]
004256fc  PUSH EAX
004256fd  MOV ECX,dword ptr [0x007947e0]
00425703  CALL 0x005e0c40
00425708  MOV ECX,dword ptr [EBP + -0x14]
0042570b  ADD ECX,dword ptr [EBP + -0xc]
0042570e  MOV EDX,dword ptr [EBP + 0xc]
00425711  ADD ECX,dword ptr [EDX]
00425713  MOV EAX,dword ptr [EBP + 0xc]
00425716  MOV dword ptr [EAX],ECX
00425718  MOV ECX,dword ptr [EBP + 0xc]
0042571b  MOV EDX,dword ptr [ECX + 0x4]
0042571e  ADD EDX,dword ptr [EBP + -0x10]
00425721  MOV EAX,dword ptr [EBP + 0xc]
00425724  MOV dword ptr [EAX + 0x4],EDX
00425727  MOV ECX,dword ptr [EBP + 0x10]
0042572a  MOV EDX,dword ptr [ECX]
0042572c  ADD EDX,dword ptr [EBP + -0x14]
0042572f  MOV EAX,dword ptr [EBP + 0x10]
00425732  MOV dword ptr [EAX],EDX
00425734  MOV ECX,dword ptr [EBP + 0x10]
00425737  MOV EDX,dword ptr [ECX + 0x4]
0042573a  ADD EDX,dword ptr [EBP + -0x10]
0042573d  MOV EAX,dword ptr [EBP + 0x10]
00425740  MOV dword ptr [EAX + 0x4],EDX
00425743  MOV ECX,dword ptr [EBP + 0x14]
00425746  MOV EDX,dword ptr [ECX]
00425748  ADD EDX,dword ptr [EBP + -0xc]
0042574b  MOV EAX,dword ptr [EBP + 0x14]
0042574e  MOV dword ptr [EAX],EDX
00425750  MOV ECX,dword ptr [EBP + 0x14]
00425753  MOV EDX,dword ptr [ECX + 0x4]
00425756  ADD EDX,dword ptr [EBP + -0x8]
00425759  MOV EAX,dword ptr [EBP + 0x14]
0042575c  MOV dword ptr [EAX + 0x4],EDX
0042575f  MOV ESP,EBP
00425761  POP EBP
00425762  RET 0x10
