; FUN_0042ba50  0042ba50
0042ba50  PUSH EBP
0042ba51  MOV EBP,ESP
0042ba53  SUB ESP,0x34
0042ba56  MOV dword ptr [EBP + -0x34],ECX
0042ba59  PUSH 0x1
0042ba5b  MOV EAX,[0x0162ee80]
0042ba60  MOV ECX,dword ptr [EAX + 0x4]
0042ba63  MOV EDX,dword ptr [0x0162ee80]
0042ba69  MOV EAX,dword ptr [EDX + 0x4]
0042ba6c  MOV EDX,dword ptr [ECX]
0042ba6e  MOV ECX,EAX
0042ba70  MOV EAX,dword ptr [EDX + 0x4]
0042ba73  CALL EAX
0042ba75  MOV dword ptr [EBP + -0x4],0x0
0042ba7c  JMP 0x0042ba87
0042ba7e  MOV ECX,dword ptr [EBP + -0x4]
0042ba81  ADD ECX,0x1
0042ba84  MOV dword ptr [EBP + -0x4],ECX
0042ba87  CMP dword ptr [EBP + -0x4],0x4c
0042ba8b  JGE 0x0042bc97
0042ba91  MOV EDX,dword ptr [EBP + -0x4]
0042ba94  MOV EAX,[0x007906d4]
0042ba99  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0042ba9d  CMP dword ptr [ECX + 0x110],-0x1
0042baa4  JNZ 0x0042bb20
0042baa6  MOV EDX,dword ptr [EBP + -0x4]
0042baa9  MOV EAX,[0x007906d4]
0042baae  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0042bab2  CALL 0x005f5400
0042bab7  CMP EAX,0x4
0042baba  JZ 0x0042bad3
0042babc  MOV ECX,dword ptr [EBP + -0x4]
0042babf  MOV EDX,dword ptr [0x007906d4]
0042bac5  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0042bac9  CALL 0x005f5400
0042bace  CMP EAX,0x5
0042bad1  JNZ 0x0042bb20
0042bad3  MOV EAX,dword ptr [EBP + -0x4]
0042bad6  MOV ECX,dword ptr [0x007906d4]
0042badc  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
0042bae0  CALL 0x005f5400
0042bae5  CMP EAX,0x5
0042bae8  JNZ 0x0042bb25
0042baea  XOR EDX,EDX
0042baec  SHL EDX,0x2
0042baef  MOV EAX,[0x007906d4]
0042baf4  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xacc]
0042bafb  MOV dword ptr [EBP + -0x18],ECX
0042bafe  MOV EDX,0x1
0042bb03  SHL EDX,0x2
0042bb06  MOV EAX,[0x007906d4]
0042bb0b  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xacc]
0042bb12  MOV dword ptr [EBP + -0x1c],ECX
0042bb15  MOV EDX,dword ptr [EBP + -0x18]
0042bb18  ADD EDX,dword ptr [EBP + -0x1c]
0042bb1b  CMP EDX,0xc
0042bb1e  JNZ 0x0042bb25
0042bb20  JMP 0x0042ba7e
0042bb25  MOV EAX,dword ptr [EBP + -0x4]
0042bb28  MOV ECX,dword ptr [0x007906d4]
0042bb2e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
0042bb32  CALL 0x005f5400
0042bb37  CMP EAX,0x4
0042bb3a  JNZ 0x0042bb7b
0042bb3c  XOR EDX,EDX
0042bb3e  SHL EDX,0x2
0042bb41  MOV EAX,[0x007906d4]
0042bb46  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xacc]
0042bb4d  MOV dword ptr [EBP + -0x20],ECX
0042bb50  MOV EDX,0x1
0042bb55  SHL EDX,0x2
0042bb58  MOV EAX,[0x007906d4]
0042bb5d  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xacc]
0042bb64  MOV dword ptr [EBP + -0x24],ECX
0042bb67  MOV EDX,dword ptr [EBP + -0x20]
0042bb6a  ADD EDX,dword ptr [EBP + -0x24]
0042bb6d  PUSH EDX
0042bb6e  MOV ECX,dword ptr [EBP + -0x34]
0042bb71  CALL 0x0042b8f0
0042bb76  MOV dword ptr [EBP + -0x14],EAX
0042bb79  JMP 0x0042bbba
0042bb7b  XOR EAX,EAX
0042bb7d  SHL EAX,0x2
0042bb80  MOV ECX,dword ptr [0x007906d4]
0042bb86  MOV EDX,dword ptr [ECX + EAX*0x1 + 0xacc]
0042bb8d  MOV dword ptr [EBP + -0x28],EDX
0042bb90  MOV EAX,0x1
0042bb95  SHL EAX,0x2
0042bb98  MOV ECX,dword ptr [0x007906d4]
0042bb9e  MOV EDX,dword ptr [ECX + EAX*0x1 + 0xacc]
0042bba5  MOV dword ptr [EBP + -0x2c],EDX
0042bba8  MOV EAX,dword ptr [EBP + -0x28]
0042bbab  ADD EAX,dword ptr [EBP + -0x2c]
0042bbae  PUSH EAX
0042bbaf  MOV ECX,dword ptr [EBP + -0x34]
0042bbb2  CALL 0x0042b9a0
0042bbb7  MOV dword ptr [EBP + -0x14],EAX
0042bbba  MOV dword ptr [EBP + -0x8],0x0
0042bbc1  JMP 0x0042bbcc
0042bbc3  MOV ECX,dword ptr [EBP + -0x8]
0042bbc6  ADD ECX,0x1
0042bbc9  MOV dword ptr [EBP + -0x8],ECX
0042bbcc  CMP dword ptr [EBP + -0x8],0x4
0042bbd0  JGE 0x0042bc92
0042bbd6  MOV EDX,dword ptr [EBP + -0x4]
0042bbd9  MOV EAX,[0x007906d4]
0042bbde  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0042bbe2  CALL 0x005f5400
0042bbe7  PUSH EAX
0042bbe8  MOV ECX,dword ptr [EBP + -0x8]
0042bbeb  PUSH ECX
0042bbec  MOV ECX,dword ptr [0x007906d4]
0042bbf2  CALL 0x004369a0
0042bbf7  MOVZX EDX,AL
0042bbfa  TEST EDX,EDX
0042bbfc  JZ 0x0042bc8d
0042bc02  MOV EAX,dword ptr [EBP + -0x4]
0042bc05  MOV ECX,dword ptr [0x007906d4]
0042bc0b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
0042bc0f  MOV dword ptr [EBP + -0x30],EDX
0042bc12  MOV EAX,dword ptr [EBP + -0x8]
0042bc15  SHL EAX,0x5
0042bc18  MOV ECX,dword ptr [EBP + -0x30]
0042bc1b  LEA EDX,[ECX + EAX*0x1 + 0x48]
0042bc1f  XOR EAX,EAX
0042bc21  SHL EAX,0x3
0042bc24  MOV ECX,dword ptr [EDX + EAX*0x1]
0042bc27  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
0042bc2b  MOV dword ptr [EBP + -0x10],ECX
0042bc2e  MOV dword ptr [EBP + -0xc],EDX
0042bc31  PUSH 0x0
0042bc33  MOV EAX,dword ptr [EBP + -0x8]
0042bc36  PUSH EAX
0042bc37  MOV ECX,dword ptr [EBP + -0xc]
0042bc3a  PUSH ECX
0042bc3b  MOV EDX,dword ptr [EBP + -0x10]
0042bc3e  PUSH EDX
0042bc3f  MOV EAX,dword ptr [EBP + -0x14]
0042bc42  MOV ECX,dword ptr [0x007906d4]
0042bc48  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
0042bc4c  MOV EAX,dword ptr [EBP + -0x14]
0042bc4f  MOV ECX,dword ptr [0x007906d4]
0042bc55  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
0042bc59  MOV EDX,dword ptr [EDX]
0042bc5b  MOV EAX,dword ptr [EDX + 0xb8]
0042bc61  CALL EAX
0042bc63  PUSH 0x0
0042bc65  MOV ECX,dword ptr [EBP + -0x8]
0042bc68  PUSH ECX
0042bc69  MOV EDX,dword ptr [EBP + -0x4]
0042bc6c  MOV EAX,[0x007906d4]
0042bc71  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0042bc75  MOV EDX,dword ptr [EBP + -0x4]
0042bc78  MOV EAX,[0x007906d4]
0042bc7d  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4]
0042bc81  MOV EAX,dword ptr [ECX]
0042bc83  MOV ECX,EDX
0042bc85  MOV EDX,dword ptr [EAX + 0xbc]
0042bc8b  CALL EDX
0042bc8d  JMP 0x0042bbc3
0042bc92  JMP 0x0042ba7e
0042bc97  PUSH 0xf
0042bc99  MOV EAX,[0x0162ee80]
0042bc9e  MOV ECX,dword ptr [EAX + 0x4]
0042bca1  MOV EDX,dword ptr [0x0162ee80]
0042bca7  MOV EAX,dword ptr [EDX + 0x4]
0042bcaa  MOV EDX,dword ptr [ECX]
0042bcac  MOV ECX,EAX
0042bcae  MOV EAX,dword ptr [EDX + 0x1c]
0042bcb1  CALL EAX
0042bcb3  MOV ESP,EBP
0042bcb5  POP EBP
0042bcb6  RET
