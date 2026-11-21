; FUN_00584c90  00584c90
00584c90  PUSH EBP
00584c91  MOV EBP,ESP
00584c93  SUB ESP,0xc
00584c96  PUSH ESI
00584c97  MOV dword ptr [EBP + -0xc],ECX
00584c9a  MOV EAX,dword ptr [EBP + 0xc]
00584c9d  PUSH EAX
00584c9e  MOV ECX,dword ptr [EBP + 0x8]
00584ca1  PUSH ECX
00584ca2  MOV ECX,dword ptr [EBP + -0xc]
00584ca5  CALL 0x005f6240
00584caa  MOV EDX,dword ptr [EBP + -0xc]
00584cad  MOV EAX,dword ptr [EDX]
00584caf  MOV ECX,dword ptr [EBP + -0xc]
00584cb2  MOV EDX,dword ptr [EAX + 0x4c]
00584cb5  CALL EDX
00584cb7  MOV dword ptr [EBP + -0x8],EAX
00584cba  MOV EAX,dword ptr [EBP + -0xc]
00584cbd  MOV EDX,dword ptr [EAX]
00584cbf  MOV ECX,dword ptr [EBP + -0xc]
00584cc2  MOV EAX,dword ptr [EDX + 0x54]
00584cc5  CALL EAX
00584cc7  MOV dword ptr [EBP + -0x4],EAX
00584cca  MOV ECX,dword ptr [EBP + -0x4]
00584ccd  PUSH ECX
00584cce  MOV EDX,dword ptr [EBP + -0x8]
00584cd1  PUSH EDX
00584cd2  MOV EAX,dword ptr [EBP + -0xc]
00584cd5  MOV ECX,dword ptr [EAX + 0x5c]
00584cd8  MOV EDX,dword ptr [EBP + -0xc]
00584cdb  MOV EAX,dword ptr [EDX + 0x5c]
00584cde  MOV EDX,dword ptr [ECX]
00584ce0  MOV ECX,EAX
00584ce2  MOV EAX,dword ptr [EDX + 0x44]
00584ce5  CALL EAX
00584ce7  MOV ECX,dword ptr [EBP + -0xc]
00584cea  CMP dword ptr [ECX + 0x68],0x0
00584cee  JNZ 0x00584d98
00584cf4  MOV ECX,dword ptr [EBP + -0xc]
00584cf7  CALL 0x005f5590
00584cfc  MOV ESI,EAX
00584cfe  ADD ESI,dword ptr [EBP + -0x4]
00584d01  MOV EDX,dword ptr [EBP + -0xc]
00584d04  MOV ECX,dword ptr [EDX + 0x60]
00584d07  CALL 0x005f5590
00584d0c  SUB EAX,0x1
00584d0f  SUB ESI,EAX
00584d11  PUSH ESI
00584d12  MOV EAX,dword ptr [EBP + -0x8]
00584d15  PUSH EAX
00584d16  MOV ECX,dword ptr [EBP + -0xc]
00584d19  MOV EDX,dword ptr [ECX + 0x60]
00584d1c  MOV EAX,dword ptr [EBP + -0xc]
00584d1f  MOV ECX,dword ptr [EAX + 0x60]
00584d22  MOV EDX,dword ptr [EDX]
00584d24  MOV EAX,dword ptr [EDX + 0x44]
00584d27  CALL EAX
00584d29  MOV ECX,dword ptr [EBP + -0xc]
00584d2c  MOV ECX,dword ptr [ECX + 0x5c]
00584d2f  CALL 0x005f5590
00584d34  ADD EAX,dword ptr [EBP + -0x4]
00584d37  PUSH EAX
00584d38  MOV EDX,dword ptr [EBP + -0x8]
00584d3b  PUSH EDX
00584d3c  MOV EAX,dword ptr [EBP + -0xc]
00584d3f  MOV ECX,dword ptr [EAX + 0x64]
00584d42  MOV EDX,dword ptr [EBP + -0xc]
00584d45  MOV EAX,dword ptr [EDX + 0x64]
00584d48  MOV EDX,dword ptr [ECX]
00584d4a  MOV ECX,EAX
00584d4c  MOV EAX,dword ptr [EDX + 0x44]
00584d4f  CALL EAX
00584d51  MOV ECX,dword ptr [EBP + -0xc]
00584d54  MOV EDX,dword ptr [ECX + 0x60]
00584d57  MOV EAX,dword ptr [EBP + -0xc]
00584d5a  MOV ECX,dword ptr [EAX + 0x60]
00584d5d  MOV EDX,dword ptr [EDX]
00584d5f  MOV EAX,dword ptr [EDX + 0x54]
00584d62  CALL EAX
00584d64  MOV ESI,EAX
00584d66  MOV ECX,dword ptr [EBP + -0xc]
00584d69  MOV ECX,dword ptr [ECX + 0x64]
00584d6c  CALL 0x005f5590
00584d71  SUB ESI,EAX
00584d73  PUSH ESI
00584d74  MOV EDX,dword ptr [EBP + -0xc]
00584d77  MOV EAX,dword ptr [EDX + 0x64]
00584d7a  MOV ECX,dword ptr [EBP + -0xc]
00584d7d  MOV ECX,dword ptr [ECX + 0x64]
00584d80  MOV EDX,dword ptr [EAX]
00584d82  MOV EAX,dword ptr [EDX + 0x54]
00584d85  CALL EAX
00584d87  PUSH EAX
00584d88  MOV ECX,dword ptr [EBP + -0xc]
00584d8b  MOV ECX,dword ptr [ECX + 0x64]
00584d8e  CALL 0x00584210
00584d93  JMP 0x00584e37
00584d98  MOV EDX,dword ptr [EBP + -0x4]
00584d9b  PUSH EDX
00584d9c  MOV ECX,dword ptr [EBP + -0xc]
00584d9f  CALL 0x005f5550
00584da4  MOV ESI,EAX
00584da6  ADD ESI,dword ptr [EBP + -0x8]
00584da9  MOV EAX,dword ptr [EBP + -0xc]
00584dac  MOV ECX,dword ptr [EAX + 0x60]
00584daf  CALL 0x005f5550
00584db4  SUB EAX,0x1
00584db7  SUB ESI,EAX
00584db9  PUSH ESI
00584dba  MOV ECX,dword ptr [EBP + -0xc]
00584dbd  MOV EDX,dword ptr [ECX + 0x60]
00584dc0  MOV EAX,dword ptr [EBP + -0xc]
00584dc3  MOV ECX,dword ptr [EAX + 0x60]
00584dc6  MOV EDX,dword ptr [EDX]
00584dc8  MOV EAX,dword ptr [EDX + 0x44]
00584dcb  CALL EAX
00584dcd  MOV ECX,dword ptr [EBP + -0x4]
00584dd0  PUSH ECX
00584dd1  MOV EDX,dword ptr [EBP + -0xc]
00584dd4  MOV ECX,dword ptr [EDX + 0x5c]
00584dd7  CALL 0x005f5550
00584ddc  ADD EAX,dword ptr [EBP + -0x8]
00584ddf  PUSH EAX
00584de0  MOV EAX,dword ptr [EBP + -0xc]
00584de3  MOV ECX,dword ptr [EAX + 0x64]
00584de6  MOV EDX,dword ptr [EBP + -0xc]
00584de9  MOV EAX,dword ptr [EDX + 0x64]
00584dec  MOV EDX,dword ptr [ECX]
00584dee  MOV ECX,EAX
00584df0  MOV EAX,dword ptr [EDX + 0x44]
00584df3  CALL EAX
00584df5  MOV ECX,dword ptr [EBP + -0xc]
00584df8  MOV EDX,dword ptr [ECX + 0x60]
00584dfb  MOV EAX,dword ptr [EBP + -0xc]
00584dfe  MOV ECX,dword ptr [EAX + 0x60]
00584e01  MOV EDX,dword ptr [EDX]
00584e03  MOV EAX,dword ptr [EDX + 0x4c]
00584e06  CALL EAX
00584e08  MOV ESI,EAX
00584e0a  MOV ECX,dword ptr [EBP + -0xc]
00584e0d  MOV ECX,dword ptr [ECX + 0x64]
00584e10  CALL 0x005f5550
00584e15  SUB ESI,EAX
00584e17  PUSH ESI
00584e18  MOV EDX,dword ptr [EBP + -0xc]
00584e1b  MOV EAX,dword ptr [EDX + 0x64]
00584e1e  MOV ECX,dword ptr [EBP + -0xc]
00584e21  MOV ECX,dword ptr [ECX + 0x64]
00584e24  MOV EDX,dword ptr [EAX]
00584e26  MOV EAX,dword ptr [EDX + 0x4c]
00584e29  CALL EAX
00584e2b  PUSH EAX
00584e2c  MOV ECX,dword ptr [EBP + -0xc]
00584e2f  MOV ECX,dword ptr [ECX + 0x64]
00584e32  CALL 0x00584210
00584e37  MOV EDX,dword ptr [EBP + -0xc]
00584e3a  MOV ECX,dword ptr [EDX + 0x64]
00584e3d  CALL 0x00584260
00584e42  MOV ESI,EAX
00584e44  MOV EAX,dword ptr [EBP + -0xc]
00584e47  MOV ECX,dword ptr [EAX + 0x64]
00584e4a  CALL 0x00584240
00584e4f  SUB ESI,EAX
00584e51  MOV ECX,dword ptr [EBP + -0xc]
00584e54  MOV dword ptr [ECX + 0x70],ESI
00584e57  POP ESI
00584e58  MOV ESP,EBP
00584e5a  POP EBP
00584e5b  RET 0x8
