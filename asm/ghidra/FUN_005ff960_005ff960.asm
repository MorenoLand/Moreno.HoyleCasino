; FUN_005ff960  005ff960
005ff960  PUSH EBP
005ff961  MOV EBP,ESP
005ff963  SUB ESP,0x14
005ff966  PUSH ESI
005ff967  MOV dword ptr [EBP + -0x14],ECX
005ff96a  MOV word ptr [EBP + -0x10],0x0
005ff970  MOV word ptr [EBP + -0x8],0x0
005ff976  JMP 0x005ff984
005ff978  MOV AX,word ptr [EBP + -0x8]
005ff97c  ADD AX,0x1
005ff980  MOV word ptr [EBP + -0x8],AX
005ff984  MOVSX ESI,word ptr [EBP + -0x8]
005ff988  MOV ECX,dword ptr [EBP + -0x14]
005ff98b  CALL 0x006063e0
005ff990  CMP ESI,EAX
005ff992  JGE 0x005ff9cc
005ff994  MOVSX ECX,word ptr [EBP + -0x8]
005ff998  PUSH ECX
005ff999  MOV ECX,dword ptr [EBP + -0x14]
005ff99c  CALL 0x005ff920
005ff9a1  MOV dword ptr [EBP + -0xc],EAX
005ff9a4  MOV EDX,dword ptr [EBP + -0xc]
005ff9a7  MOV EAX,dword ptr [EDX]
005ff9a9  MOV ECX,dword ptr [EBP + -0xc]
005ff9ac  MOV EDX,dword ptr [EAX + 0x54]
005ff9af  CALL EDX
005ff9b1  MOVSX ECX,word ptr [EBP + -0x10]
005ff9b5  CMP EAX,ECX
005ff9b7  JLE 0x005ff9ca
005ff9b9  MOV EDX,dword ptr [EBP + -0xc]
005ff9bc  MOV EAX,dword ptr [EDX]
005ff9be  MOV ECX,dword ptr [EBP + -0xc]
005ff9c1  MOV EDX,dword ptr [EAX + 0x54]
005ff9c4  CALL EDX
005ff9c6  MOV word ptr [EBP + -0x10],AX
005ff9ca  JMP 0x005ff978
005ff9cc  MOV EAX,dword ptr [EBP + 0x8]
005ff9cf  MOV EDX,dword ptr [EAX]
005ff9d1  MOV ECX,dword ptr [EBP + 0x8]
005ff9d4  MOV EAX,dword ptr [EDX + 0x54]
005ff9d7  CALL EAX
005ff9d9  MOVSX ECX,word ptr [EBP + -0x10]
005ff9dd  CMP EAX,ECX
005ff9df  JNZ 0x005ffa46
005ff9e1  MOV word ptr [EBP + -0x8],0x0
005ff9e7  JMP 0x005ff9f5
005ff9e9  MOV DX,word ptr [EBP + -0x8]
005ff9ed  ADD DX,0x1
005ff9f1  MOV word ptr [EBP + -0x8],DX
005ff9f5  MOVSX ESI,word ptr [EBP + -0x8]
005ff9f9  MOV ECX,dword ptr [EBP + -0x14]
005ff9fc  CALL 0x006063e0
005ffa01  CMP ESI,EAX
005ffa03  JGE 0x005ffa41
005ffa05  MOVSX EAX,word ptr [EBP + -0x8]
005ffa09  PUSH EAX
005ffa0a  MOV ECX,dword ptr [EBP + -0x14]
005ffa0d  CALL 0x005ff920
005ffa12  MOV dword ptr [EBP + -0xc],EAX
005ffa15  MOV ECX,dword ptr [EBP + -0xc]
005ffa18  MOV EDX,dword ptr [ECX]
005ffa1a  MOV ECX,dword ptr [EBP + -0xc]
005ffa1d  MOV EAX,dword ptr [EDX + 0x54]
005ffa20  CALL EAX
005ffa22  MOV ESI,EAX
005ffa24  MOV ECX,dword ptr [EBP + -0xc]
005ffa27  CALL 0x005ff580
005ffa2c  MOVSX ECX,AX
005ffa2f  ADD ESI,ECX
005ffa31  PUSH ESI
005ffa32  MOV EDX,dword ptr [EBP + -0xc]
005ffa35  MOV EAX,dword ptr [EDX]
005ffa37  MOV ECX,dword ptr [EBP + -0xc]
005ffa3a  MOV EDX,dword ptr [EAX + 0x6c]
005ffa3d  CALL EDX
005ffa3f  JMP 0x005ff9e9
005ffa41  JMP 0x005ffb2a
005ffa46  MOV EAX,dword ptr [EBP + 0x8]
005ffa49  MOV EDX,dword ptr [EAX]
005ffa4b  MOV ECX,dword ptr [EBP + 0x8]
005ffa4e  MOV EAX,dword ptr [EDX + 0x54]
005ffa51  CALL EAX
005ffa53  MOV word ptr [EBP + -0x4],AX
005ffa57  MOV word ptr [EBP + -0x8],0x0
005ffa5d  JMP 0x005ffa6b
005ffa5f  MOV CX,word ptr [EBP + -0x8]
005ffa63  ADD CX,0x1
005ffa67  MOV word ptr [EBP + -0x8],CX
005ffa6b  MOVSX ESI,word ptr [EBP + -0x8]
005ffa6f  MOV ECX,dword ptr [EBP + -0x14]
005ffa72  CALL 0x006063e0
005ffa77  CMP ESI,EAX
005ffa79  JGE 0x005ffb2a
005ffa7f  MOVSX EDX,word ptr [EBP + -0x8]
005ffa83  PUSH EDX
005ffa84  MOV ECX,dword ptr [EBP + -0x14]
005ffa87  CALL 0x005ff920
005ffa8c  MOV dword ptr [EBP + -0xc],EAX
005ffa8f  MOV EAX,dword ptr [EBP + -0xc]
005ffa92  MOV EDX,dword ptr [EAX]
005ffa94  MOV ECX,dword ptr [EBP + -0xc]
005ffa97  MOV EAX,dword ptr [EDX + 0x54]
005ffa9a  CALL EAX
005ffa9c  MOVSX ECX,word ptr [EBP + -0x4]
005ffaa0  CMP EAX,ECX
005ffaa2  JNZ 0x005ffac6
005ffaa4  MOVSX EDX,word ptr [EBP + -0x10]
005ffaa8  PUSH EDX
005ffaa9  MOV EAX,dword ptr [EBP + -0xc]
005ffaac  MOV EDX,dword ptr [EAX]
005ffaae  MOV ECX,dword ptr [EBP + -0xc]
005ffab1  MOV EAX,dword ptr [EDX + 0x4c]
005ffab4  CALL EAX
005ffab6  PUSH EAX
005ffab7  MOV ECX,dword ptr [EBP + -0xc]
005ffaba  MOV EDX,dword ptr [ECX]
005ffabc  MOV ECX,dword ptr [EBP + -0xc]
005ffabf  MOV EAX,dword ptr [EDX + 0x44]
005ffac2  CALL EAX
005ffac4  JMP 0x005ffafb
005ffac6  MOV ECX,dword ptr [EBP + -0xc]
005ffac9  MOV EDX,dword ptr [ECX]
005ffacb  MOV ECX,dword ptr [EBP + -0xc]
005fface  MOV EAX,dword ptr [EDX + 0x54]
005ffad1  CALL EAX
005ffad3  MOVSX ECX,word ptr [EBP + -0x10]
005ffad7  CMP EAX,ECX
005ffad9  JNZ 0x005ffafb
005ffadb  MOVSX EDX,word ptr [EBP + -0x4]
005ffadf  PUSH EDX
005ffae0  MOV EAX,dword ptr [EBP + -0xc]
005ffae3  MOV EDX,dword ptr [EAX]
005ffae5  MOV ECX,dword ptr [EBP + -0xc]
005ffae8  MOV EAX,dword ptr [EDX + 0x4c]
005ffaeb  CALL EAX
005ffaed  PUSH EAX
005ffaee  MOV ECX,dword ptr [EBP + -0xc]
005ffaf1  MOV EDX,dword ptr [ECX]
005ffaf3  MOV ECX,dword ptr [EBP + -0xc]
005ffaf6  MOV EAX,dword ptr [EDX + 0x44]
005ffaf9  CALL EAX
005ffafb  MOV ECX,dword ptr [EBP + -0xc]
005ffafe  MOV EDX,dword ptr [ECX]
005ffb00  MOV ECX,dword ptr [EBP + -0xc]
005ffb03  MOV EAX,dword ptr [EDX + 0x54]
005ffb06  CALL EAX
005ffb08  MOV ESI,EAX
005ffb0a  MOV ECX,dword ptr [EBP + -0xc]
005ffb0d  CALL 0x005ff580
005ffb12  MOVSX ECX,AX
005ffb15  ADD ESI,ECX
005ffb17  PUSH ESI
005ffb18  MOV EDX,dword ptr [EBP + -0xc]
005ffb1b  MOV EAX,dword ptr [EDX]
005ffb1d  MOV ECX,dword ptr [EBP + -0xc]
005ffb20  MOV EDX,dword ptr [EAX + 0x6c]
005ffb23  CALL EDX
005ffb25  JMP 0x005ffa5f
005ffb2a  POP ESI
005ffb2b  MOV ESP,EBP
005ffb2d  POP EBP
005ffb2e  RET 0x4
