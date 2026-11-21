; FUN_00614b60  00614b60
00614b60  PUSH EBP
00614b61  MOV EBP,ESP
00614b63  PUSH ECX
00614b64  MOV dword ptr [EBP + -0x4],ECX
00614b67  MOV EAX,dword ptr [EBP + 0x54]
00614b6a  PUSH EAX
00614b6b  MOV ECX,dword ptr [EBP + 0x14]
00614b6e  PUSH ECX
00614b6f  MOV EDX,dword ptr [EBP + 0x10]
00614b72  PUSH EDX
00614b73  MOV EAX,dword ptr [EBP + 0xc]
00614b76  PUSH EAX
00614b77  MOV ECX,dword ptr [EBP + -0x4]
00614b7a  CALL 0x005f50c0
00614b7f  MOV ECX,dword ptr [EBP + -0x4]
00614b82  MOV EDX,dword ptr [EBP + 0x18]
00614b85  MOV dword ptr [ECX + 0x5c],EDX
00614b88  MOV EAX,dword ptr [EBP + -0x4]
00614b8b  MOV ECX,dword ptr [EAX + 0x48]
00614b8e  MOV EDX,dword ptr [EBP + -0x4]
00614b91  MOV EAX,dword ptr [EDX + 0x4]
00614b94  MOV dword ptr [ECX + 0x4],EAX
00614b97  CMP dword ptr [EBP + 0x8],0x0
00614b9b  JZ 0x00614bbc
00614b9d  PUSH -0x1
00614b9f  MOV ECX,dword ptr [EBP + 0x14]
00614ba2  PUSH ECX
00614ba3  MOV EDX,dword ptr [EBP + 0x10]
00614ba6  PUSH EDX
00614ba7  MOV EAX,dword ptr [EBP + 0xc]
00614baa  PUSH EAX
00614bab  MOV ECX,dword ptr [EBP + 0x8]
00614bae  PUSH ECX
00614baf  MOV EDX,dword ptr [EBP + -0x4]
00614bb2  MOV ECX,dword ptr [EDX + 0x48]
00614bb5  CALL 0x005eae80
00614bba  JMP 0x00614bd1
00614bbc  MOV EAX,dword ptr [EBP + -0x4]
00614bbf  MOV ECX,dword ptr [EAX + 0x48]
00614bc2  MOV EDX,dword ptr [EBP + -0x4]
00614bc5  MOV EAX,dword ptr [EDX + 0x48]
00614bc8  MOV EDX,dword ptr [ECX]
00614bca  MOV ECX,EAX
00614bcc  MOV EAX,dword ptr [EDX + 0x70]
00614bcf  CALL EAX
00614bd1  MOV ECX,dword ptr [EBP + -0x4]
00614bd4  MOV EDX,dword ptr [ECX + 0x4c]
00614bd7  MOV EAX,dword ptr [EBP + -0x4]
00614bda  MOV ECX,dword ptr [EAX + 0x4]
00614bdd  MOV dword ptr [EDX + 0x4],ECX
00614be0  PUSH -0x1
00614be2  MOV EDX,dword ptr [EBP + 0x14]
00614be5  ADD EDX,0x1
00614be8  PUSH EDX
00614be9  MOV EAX,dword ptr [EBP + 0x10]
00614bec  ADD EAX,dword ptr [EBP + 0x48]
00614bef  PUSH EAX
00614bf0  MOV ECX,dword ptr [EBP + 0xc]
00614bf3  ADD ECX,dword ptr [EBP + 0x44]
00614bf6  PUSH ECX
00614bf7  MOV EDX,dword ptr [EBP + 0x50]
00614bfa  PUSH EDX
00614bfb  MOV EAX,dword ptr [EBP + 0x4c]
00614bfe  PUSH EAX
00614bff  MOV ECX,dword ptr [EBP + -0x4]
00614c02  MOV ECX,dword ptr [ECX + 0x4c]
00614c05  CALL 0x005f61d0
00614c0a  MOV EDX,dword ptr [EBP + -0x4]
00614c0d  MOV EAX,dword ptr [EDX + 0x50]
00614c10  MOV ECX,dword ptr [EBP + -0x4]
00614c13  MOV EDX,dword ptr [ECX + 0x4]
00614c16  MOV dword ptr [EAX + 0x4],EDX
00614c19  PUSH -0x1
00614c1b  MOV EAX,dword ptr [EBP + 0x14]
00614c1e  ADD EAX,0x2
00614c21  PUSH EAX
00614c22  MOV ECX,dword ptr [EBP + 0x10]
00614c25  ADD ECX,dword ptr [EBP + 0x24]
00614c28  PUSH ECX
00614c29  MOV EDX,dword ptr [EBP + 0xc]
00614c2c  ADD EDX,dword ptr [EBP + 0x20]
00614c2f  PUSH EDX
00614c30  MOV EAX,dword ptr [EBP + 0x1c]
00614c33  PUSH EAX
00614c34  MOV ECX,dword ptr [EBP + -0x4]
00614c37  MOV ECX,dword ptr [ECX + 0x50]
00614c3a  CALL 0x005eae80
00614c3f  MOV EDX,dword ptr [EBP + -0x4]
00614c42  MOV EAX,dword ptr [EDX + 0x54]
00614c45  MOV ECX,dword ptr [EBP + -0x4]
00614c48  MOV EDX,dword ptr [ECX + 0x4]
00614c4b  MOV dword ptr [EAX + 0x4],EDX
00614c4e  PUSH -0x1
00614c50  MOV EAX,dword ptr [EBP + 0x14]
00614c53  ADD EAX,0x2
00614c56  PUSH EAX
00614c57  MOV ECX,dword ptr [EBP + 0x10]
00614c5a  ADD ECX,dword ptr [EBP + 0x30]
00614c5d  PUSH ECX
00614c5e  MOV EDX,dword ptr [EBP + 0xc]
00614c61  ADD EDX,dword ptr [EBP + 0x2c]
00614c64  PUSH EDX
00614c65  MOV EAX,dword ptr [EBP + 0x28]
00614c68  PUSH EAX
00614c69  MOV ECX,dword ptr [EBP + -0x4]
00614c6c  MOV ECX,dword ptr [ECX + 0x54]
00614c6f  CALL 0x005eae80
00614c74  MOV EDX,dword ptr [EBP + -0x4]
00614c77  MOV EAX,dword ptr [EDX + 0x58]
00614c7a  MOV ECX,dword ptr [EBP + -0x4]
00614c7d  MOV EDX,dword ptr [ECX + 0x4]
00614c80  MOV dword ptr [EAX + 0x4],EDX
00614c83  MOV ECX,dword ptr [EBP + -0x4]
00614c86  CALL 0x00615160
00614c8b  MOVZX EAX,AL
00614c8e  TEST EAX,EAX
00614c90  JZ 0x00614cd8
00614c92  MOV ECX,dword ptr [EBP + 0xc]
00614c95  ADD ECX,dword ptr [EBP + 0x40]
00614c98  PUSH ECX
00614c99  MOV EDX,dword ptr [EBP + 0xc]
00614c9c  ADD EDX,dword ptr [EBP + 0x3c]
00614c9f  PUSH EDX
00614ca0  MOV EAX,dword ptr [EBP + -0x4]
00614ca3  MOV ECX,dword ptr [EAX + 0x58]
00614ca6  CALL 0x00615e80
00614cab  PUSH -0x1
00614cad  MOV ECX,dword ptr [EBP + 0x14]
00614cb0  ADD ECX,0x3
00614cb3  PUSH ECX
00614cb4  MOV EDX,dword ptr [EBP + 0x10]
00614cb7  ADD EDX,dword ptr [EBP + 0x38]
00614cba  PUSH EDX
00614cbb  MOV EAX,dword ptr [EBP + -0x4]
00614cbe  MOV ECX,dword ptr [EAX + 0x58]
00614cc1  CALL 0x00615eb0
00614cc6  PUSH EAX
00614cc7  MOV ECX,dword ptr [EBP + 0x34]
00614cca  PUSH ECX
00614ccb  MOV EDX,dword ptr [EBP + -0x4]
00614cce  MOV ECX,dword ptr [EDX + 0x58]
00614cd1  CALL 0x005eae80
00614cd6  JMP 0x00614d1c
00614cd8  MOV EAX,dword ptr [EBP + 0x10]
00614cdb  ADD EAX,dword ptr [EBP + 0x40]
00614cde  PUSH EAX
00614cdf  MOV ECX,dword ptr [EBP + 0x10]
00614ce2  ADD ECX,dword ptr [EBP + 0x3c]
00614ce5  PUSH ECX
00614ce6  MOV EDX,dword ptr [EBP + -0x4]
00614ce9  MOV ECX,dword ptr [EDX + 0x58]
00614cec  CALL 0x00615e80
00614cf1  PUSH -0x1
00614cf3  MOV EAX,dword ptr [EBP + 0x14]
00614cf6  ADD EAX,0x3
00614cf9  PUSH EAX
00614cfa  MOV ECX,dword ptr [EBP + -0x4]
00614cfd  MOV ECX,dword ptr [ECX + 0x58]
00614d00  CALL 0x00615eb0
00614d05  PUSH EAX
00614d06  MOV EDX,dword ptr [EBP + 0xc]
00614d09  ADD EDX,dword ptr [EBP + 0x38]
00614d0c  PUSH EDX
00614d0d  MOV EAX,dword ptr [EBP + 0x34]
00614d10  PUSH EAX
00614d11  MOV ECX,dword ptr [EBP + -0x4]
00614d14  MOV ECX,dword ptr [ECX + 0x58]
00614d17  CALL 0x005eae80
00614d1c  MOV ESP,EBP
00614d1e  POP EBP
00614d1f  RET 0x50
