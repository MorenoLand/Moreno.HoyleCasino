; FUN_00531c90  00531c90
00531c90  PUSH EBP
00531c91  MOV EBP,ESP
00531c93  PUSH ECX
00531c94  MOV dword ptr [EBP + -0x4],ECX
00531c97  MOV EAX,dword ptr [EBP + -0x4]
00531c9a  MOV ECX,dword ptr [EAX + 0x188]
00531ca0  MOV EDX,dword ptr [EBP + -0x4]
00531ca3  MOV EAX,dword ptr [EDX + 0x188]
00531ca9  MOV EDX,dword ptr [ECX]
00531cab  MOV ECX,EAX
00531cad  MOV EAX,dword ptr [EDX + 0x70]
00531cb0  CALL EAX
00531cb2  MOV ECX,dword ptr [EBP + -0x4]
00531cb5  MOV dword ptr [ECX + 0x198],0xffffffff
00531cbf  MOV EDX,dword ptr [EBP + 0x8]
00531cc2  PUSH EDX
00531cc3  MOV EAX,dword ptr [EBP + -0x4]
00531cc6  MOV ECX,dword ptr [EAX + 0x188]
00531ccc  MOV EDX,dword ptr [EBP + -0x4]
00531ccf  MOV EAX,dword ptr [EDX + 0x188]
00531cd5  MOV EDX,dword ptr [ECX]
00531cd7  MOV ECX,EAX
00531cd9  MOV EAX,dword ptr [EDX + 0xb4]
00531cdf  CALL EAX
00531ce1  MOV ECX,dword ptr [EBP + -0x4]
00531ce4  MOV ECX,dword ptr [ECX + 0x188]
00531cea  CALL 0x005ef050
00531cef  ADD EAX,0x3
00531cf2  MOV EDX,dword ptr [EBP + -0x4]
00531cf5  MOV dword ptr [EDX + 0x190],EAX
00531cfb  MOV EAX,dword ptr [EBP + -0x4]
00531cfe  MOV ECX,dword ptr [EAX + 0x190]
00531d04  PUSH ECX
00531d05  MOV EDX,dword ptr [EBP + -0x4]
00531d08  MOV ECX,dword ptr [EDX + 0x188]
00531d0e  CALL 0x005ecc60
00531d13  MOV EAX,dword ptr [EBP + -0x4]
00531d16  MOV ECX,dword ptr [EBP + -0x4]
00531d19  MOV EAX,dword ptr [EAX + 0x18]
00531d1c  SUB EAX,dword ptr [ECX + 0x10]
00531d1f  MOV EDX,dword ptr [EBP + -0x4]
00531d22  SUB EAX,dword ptr [EDX + 0x190]
00531d28  CDQ
00531d29  SUB EAX,EDX
00531d2b  SAR EAX,0x1
00531d2d  MOV ECX,dword ptr [EBP + -0x4]
00531d30  ADD EAX,dword ptr [ECX + 0x10]
00531d33  MOV EDX,dword ptr [EBP + -0x4]
00531d36  MOV dword ptr [EDX + 0x194],EAX
00531d3c  MOV EAX,dword ptr [EBP + -0x4]
00531d3f  MOV ECX,dword ptr [EAX + 0x14]
00531d42  PUSH ECX
00531d43  MOV EDX,dword ptr [EBP + -0x4]
00531d46  MOV EAX,dword ptr [EDX + 0x194]
00531d4c  PUSH EAX
00531d4d  MOV ECX,dword ptr [EBP + -0x4]
00531d50  MOV EDX,dword ptr [ECX + 0x188]
00531d56  MOV EAX,dword ptr [EBP + -0x4]
00531d59  MOV ECX,dword ptr [EAX + 0x188]
00531d5f  MOV EDX,dword ptr [EDX]
00531d61  MOV EAX,dword ptr [EDX + 0x44]
00531d64  CALL EAX
00531d66  MOV ECX,dword ptr [EBP + -0x4]
00531d69  MOV EDX,dword ptr [ECX + 0x188]
00531d6f  MOV EAX,dword ptr [EBP + -0x4]
00531d72  MOV ECX,dword ptr [EAX + 0x188]
00531d78  MOV EDX,dword ptr [EDX]
00531d7a  MOV EAX,dword ptr [EDX + 0x74]
00531d7d  CALL EAX
00531d7f  MOV ECX,dword ptr [EBP + -0x4]
00531d82  CALL 0x005eb570
00531d87  MOV ECX,dword ptr [0x0162ee84]
00531d8d  CALL 0x005f3e50
00531d92  MOV ECX,dword ptr [EBP + -0x4]
00531d95  MOV dword ptr [ECX + 0x19c],EAX
00531d9b  MOV ESP,EBP
00531d9d  POP EBP
00531d9e  RET 0x4
