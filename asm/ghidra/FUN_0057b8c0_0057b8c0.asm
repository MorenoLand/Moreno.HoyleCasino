; FUN_0057b8c0  0057b8c0
0057b8c0  PUSH EBP
0057b8c1  MOV EBP,ESP
0057b8c3  PUSH -0x1
0057b8c5  PUSH 0x6a6747
0057b8ca  MOV EAX,FS:[0x0]
0057b8d0  PUSH EAX
0057b8d1  SUB ESP,0x54
0057b8d4  PUSH ESI
0057b8d5  PUSH EDI
0057b8d6  MOV EAX,[0x00781870]
0057b8db  XOR EAX,EBP
0057b8dd  PUSH EAX
0057b8de  LEA EAX,[EBP + -0xc]
0057b8e1  MOV FS:[0x0],EAX
0057b8e7  MOV dword ptr [EBP + -0x4c],ECX
0057b8ea  MOV ECX,dword ptr [EBP + -0x4c]
0057b8ed  CALL 0x005f8340
0057b8f2  MOV ECX,dword ptr [EBP + -0x4c]
0057b8f5  CALL 0x005f88f0
0057b8fa  MOVZX EAX,AL
0057b8fd  TEST EAX,EAX
0057b8ff  JZ 0x0057b906
0057b901  JMP 0x0057be68
0057b906  MOV ECX,dword ptr [EBP + -0x4c]
0057b909  MOV DL,byte ptr [ECX + 0x1bc]
0057b90f  MOV byte ptr [EBP + -0x15],DL
0057b912  MOV EAX,dword ptr [EBP + -0x4c]
0057b915  MOV ECX,dword ptr [EAX + 0x19e0]
0057b91b  MOV EDX,dword ptr [ECX + 0x1b4]
0057b921  MOV dword ptr [EBP + -0x20],EDX
0057b924  MOV ECX,dword ptr [EBP + -0x4c]
0057b927  CALL 0x005f8930
0057b92c  MOV dword ptr [EBP + -0x10],EAX
0057b92f  MOV ECX,dword ptr [EBP + -0x4c]
0057b932  CALL 0x005f8950
0057b937  MOV dword ptr [EBP + -0x1c],EAX
0057b93a  CMP dword ptr [EBP + -0x10],0x0
0057b93e  JLE 0x0057b96f
0057b940  MOV ECX,dword ptr [EBP + -0x4c]
0057b943  CALL 0x005f8550
0057b948  SUB EAX,0x3
0057b94b  CMP dword ptr [EBP + -0x10],EAX
0057b94e  JG 0x0057b96f
0057b950  CMP dword ptr [EBP + -0x1c],0x0
0057b954  JLE 0x0057b96f
0057b956  MOV ECX,dword ptr [EBP + -0x4c]
0057b959  CALL 0x005f8570
0057b95e  SUB EAX,0x3
0057b961  CMP dword ptr [EBP + -0x1c],EAX
0057b964  JG 0x0057b96f
0057b966  MOV dword ptr [EBP + -0x50],0x1
0057b96d  JMP 0x0057b976
0057b96f  MOV dword ptr [EBP + -0x50],0x0
0057b976  MOV AL,byte ptr [EBP + -0x50]
0057b979  MOV byte ptr [EBP + -0x45],AL
0057b97c  MOV ECX,dword ptr [EBP + -0x4c]
0057b97f  MOVZX EDX,byte ptr [ECX + 0x1bd]
0057b986  TEST EDX,EDX
0057b988  JZ 0x0057b9cb
0057b98a  MOVZX EAX,byte ptr [EBP + -0x45]
0057b98e  TEST EAX,EAX
0057b990  JNZ 0x0057b9b9
0057b992  MOV ECX,dword ptr [EBP + -0x4c]
0057b995  MOV EDX,dword ptr [ECX + 0x19e0]
0057b99b  CMP dword ptr [EDX + 0x1b4],-0x1
0057b9a2  JZ 0x0057b9cb
0057b9a4  MOV EAX,dword ptr [EBP + -0x4c]
0057b9a7  MOV ECX,dword ptr [EAX + 0x19e0]
0057b9ad  CALL 0x0057d4b0
0057b9b2  MOVZX ECX,AL
0057b9b5  TEST ECX,ECX
0057b9b7  JZ 0x0057b9cb
0057b9b9  MOV EDX,dword ptr [EBP + -0x4c]
0057b9bc  MOV byte ptr [EDX + 0x1bd],0x0
0057b9c3  MOV ECX,dword ptr [EBP + -0x4c]
0057b9c6  CALL 0x0057b1b0
0057b9cb  MOV EAX,dword ptr [EBP + -0x4c]
0057b9ce  MOVZX ECX,byte ptr [EAX + 0x124]
0057b9d5  TEST ECX,ECX
0057b9d7  JZ 0x0057b9de
0057b9d9  JMP 0x0057be68
0057b9de  LEA ECX,[EBP + -0x44]
0057b9e1  CALL 0x006101f0
0057b9e6  MOV dword ptr [EBP + -0x4],0x0
0057b9ed  MOV EDX,dword ptr [EBP + -0x10]
0057b9f0  MOV dword ptr [EBP + -0x3c],EDX
0057b9f3  MOV EAX,dword ptr [EBP + -0x1c]
0057b9f6  MOV dword ptr [EBP + -0x38],EAX
0057b9f9  PUSH 0x0
0057b9fb  MOV ECX,dword ptr [EBP + -0x4c]
0057b9fe  CALL 0x005fb300
0057ba03  MOV dword ptr [EBP + -0x54],EAX
0057ba06  LEA ECX,[EBP + -0x44]
0057ba09  PUSH ECX
0057ba0a  MOV EDX,dword ptr [EBP + -0x54]
0057ba0d  MOV EAX,dword ptr [EDX]
0057ba0f  MOV ECX,dword ptr [EBP + -0x54]
0057ba12  MOV EDX,dword ptr [EAX + 0x84]
0057ba18  CALL EDX
0057ba1a  MOVZX EAX,AL
0057ba1d  TEST EAX,EAX
0057ba1f  JZ 0x0057bb12
0057ba25  MOV ECX,dword ptr [EBP + -0x4c]
0057ba28  MOVZX EDX,byte ptr [ECX + 0x1bc]
0057ba2f  TEST EDX,EDX
0057ba31  JZ 0x0057bb12
0057ba37  MOV EAX,dword ptr [EBP + -0x4c]
0057ba3a  MOV ECX,dword ptr [EAX + 0x19e0]
0057ba40  MOV EDX,dword ptr [EBP + -0x4c]
0057ba43  MOV EAX,dword ptr [EDX + 0x19d4]
0057ba49  SUB EAX,0x1
0057ba4c  CMP dword ptr [ECX + 0x1b4],EAX
0057ba52  JZ 0x0057bafe
0057ba58  MOV ECX,dword ptr [EBP + -0x4c]
0057ba5b  MOV ECX,dword ptr [ECX + 0x19e0]
0057ba61  CALL 0x0057d3a0
0057ba66  PUSH 0x0
0057ba68  MOV ECX,dword ptr [EBP + -0x4c]
0057ba6b  CALL 0x005fb300
0057ba70  MOV dword ptr [EBP + -0x58],EAX
0057ba73  MOV EDX,dword ptr [EBP + -0x58]
0057ba76  MOV EAX,dword ptr [EDX]
0057ba78  MOV ECX,dword ptr [EBP + -0x58]
0057ba7b  MOV EDX,dword ptr [EAX + 0x54]
0057ba7e  CALL EDX
0057ba80  MOV ESI,EAX
0057ba82  MOV ECX,dword ptr [EBP + -0x4c]
0057ba85  CALL 0x005f84f0
0057ba8a  LEA EAX,[EAX + ESI*0x1 + -0x4]
0057ba8e  PUSH EAX
0057ba8f  MOV ECX,dword ptr [EBP + -0x4c]
0057ba92  MOV EDX,dword ptr [ECX + 0x19d8]
0057ba98  MOV ECX,dword ptr [EDX]
0057ba9a  CALL 0x005f5550
0057ba9f  MOV ESI,EAX
0057baa1  MOV EAX,dword ptr [EBP + -0x4c]
0057baa4  MOV ECX,dword ptr [EAX + 0x19d8]
0057baaa  MOV ECX,dword ptr [ECX]
0057baac  MOV EDX,dword ptr [EBP + -0x4c]
0057baaf  MOV EAX,dword ptr [EDX + 0x19d8]
0057bab5  MOV EDX,dword ptr [EAX]
0057bab7  MOV EAX,dword ptr [EDX]
0057bab9  MOV EDX,dword ptr [EAX + 0x4c]
0057babc  CALL EDX
0057babe  MOV EDI,EAX
0057bac0  MOV ECX,dword ptr [EBP + -0x4c]
0057bac3  CALL 0x005f84d0
0057bac8  ADD EAX,EDI
0057baca  ADD EAX,ESI
0057bacc  PUSH EAX
0057bacd  MOV EAX,dword ptr [EBP + -0x4c]
0057bad0  MOV ECX,dword ptr [EAX + 0x19e0]
0057bad6  CALL 0x005f8420
0057badb  MOV ECX,dword ptr [EBP + -0x4c]
0057bade  MOV EDX,dword ptr [ECX + 0x19d4]
0057bae4  SUB EDX,0x1
0057bae7  PUSH EDX
0057bae8  MOV EAX,dword ptr [EBP + -0x4c]
0057baeb  MOV ECX,dword ptr [EAX + 0x19e0]
0057baf1  CALL 0x0057cb70
0057baf6  MOV ECX,dword ptr [EBP + -0x4c]
0057baf9  CALL 0x0057b1b0
0057bafe  MOV dword ptr [EBP + -0x4],0xffffffff
0057bb05  LEA ECX,[EBP + -0x44]
0057bb08  CALL 0x00610250
0057bb0d  JMP 0x0057be68
0057bb12  PUSH 0x1
0057bb14  MOV ECX,dword ptr [EBP + -0x4c]
0057bb17  CALL 0x005fb350
0057bb1c  MOV dword ptr [EBP + -0x5c],EAX
0057bb1f  LEA ECX,[EBP + -0x44]
0057bb22  PUSH ECX
0057bb23  MOV EDX,dword ptr [EBP + -0x5c]
0057bb26  MOV EAX,dword ptr [EDX]
0057bb28  MOV ECX,dword ptr [EBP + -0x5c]
0057bb2b  MOV EDX,dword ptr [EAX + 0x84]
0057bb31  CALL EDX
0057bb33  MOVZX EAX,AL
0057bb36  TEST EAX,EAX
0057bb38  JZ 0x0057bc2b
0057bb3e  MOV ECX,dword ptr [EBP + -0x4c]
0057bb41  MOVZX EDX,byte ptr [ECX + 0x1bc]
0057bb48  TEST EDX,EDX
0057bb4a  JZ 0x0057bc2b
0057bb50  MOV EAX,dword ptr [EBP + -0x4c]
0057bb53  MOV ECX,dword ptr [EAX + 0x19e0]
0057bb59  MOV EDX,dword ptr [EBP + -0x4c]
0057bb5c  MOV EAX,dword ptr [EDX + 0x19d4]
0057bb62  SUB EAX,0x2
0057bb65  CMP dword ptr [ECX + 0x1b4],EAX
0057bb6b  JZ 0x0057bc17
0057bb71  MOV ECX,dword ptr [EBP + -0x4c]
0057bb74  MOV ECX,dword ptr [ECX + 0x19e0]
0057bb7a  CALL 0x0057d3a0
0057bb7f  PUSH 0x1
0057bb81  MOV ECX,dword ptr [EBP + -0x4c]
0057bb84  CALL 0x005fb350
0057bb89  MOV dword ptr [EBP + -0x60],EAX
0057bb8c  MOV EDX,dword ptr [EBP + -0x60]
0057bb8f  MOV EAX,dword ptr [EDX]
0057bb91  MOV ECX,dword ptr [EBP + -0x60]
0057bb94  MOV EDX,dword ptr [EAX + 0x54]
0057bb97  CALL EDX
0057bb99  MOV ESI,EAX
0057bb9b  MOV ECX,dword ptr [EBP + -0x4c]
0057bb9e  CALL 0x005f84f0
0057bba3  LEA EAX,[EAX + ESI*0x1 + -0x4]
0057bba7  PUSH EAX
0057bba8  MOV ECX,dword ptr [EBP + -0x4c]
0057bbab  MOV EDX,dword ptr [ECX + 0x19d8]
0057bbb1  MOV ECX,dword ptr [EDX]
0057bbb3  CALL 0x005f5550
0057bbb8  MOV ESI,EAX
0057bbba  MOV EAX,dword ptr [EBP + -0x4c]
0057bbbd  MOV ECX,dword ptr [EAX + 0x19d8]
0057bbc3  MOV ECX,dword ptr [ECX]
0057bbc5  MOV EDX,dword ptr [EBP + -0x4c]
0057bbc8  MOV EAX,dword ptr [EDX + 0x19d8]
0057bbce  MOV EDX,dword ptr [EAX]
0057bbd0  MOV EAX,dword ptr [EDX]
0057bbd2  MOV EDX,dword ptr [EAX + 0x4c]
0057bbd5  CALL EDX
0057bbd7  MOV EDI,EAX
0057bbd9  MOV ECX,dword ptr [EBP + -0x4c]
0057bbdc  CALL 0x005f84d0
0057bbe1  ADD EAX,EDI
0057bbe3  ADD EAX,ESI
0057bbe5  PUSH EAX
0057bbe6  MOV EAX,dword ptr [EBP + -0x4c]
0057bbe9  MOV ECX,dword ptr [EAX + 0x19e0]
0057bbef  CALL 0x005f8420
0057bbf4  MOV ECX,dword ptr [EBP + -0x4c]
0057bbf7  MOV EDX,dword ptr [ECX + 0x19d4]
0057bbfd  SUB EDX,0x2
0057bc00  PUSH EDX
0057bc01  MOV EAX,dword ptr [EBP + -0x4c]
0057bc04  MOV ECX,dword ptr [EAX + 0x19e0]
0057bc0a  CALL 0x0057cb70
0057bc0f  MOV ECX,dword ptr [EBP + -0x4c]
0057bc12  CALL 0x0057b1b0
0057bc17  MOV dword ptr [EBP + -0x4],0xffffffff
0057bc1e  LEA ECX,[EBP + -0x44]
0057bc21  CALL 0x00610250
0057bc26  JMP 0x0057be68
0057bc2b  MOV dword ptr [EBP + -0x14],0x0
0057bc32  JMP 0x0057bc3d
0057bc34  MOV ECX,dword ptr [EBP + -0x14]
0057bc37  ADD ECX,0x1
0057bc3a  MOV dword ptr [EBP + -0x14],ECX
0057bc3d  MOV EDX,dword ptr [EBP + -0x4c]
0057bc40  MOV EAX,dword ptr [EBP + -0x14]
0057bc43  CMP EAX,dword ptr [EDX + 0x19d4]
0057bc49  JGE 0x0057bd7b
0057bc4f  LEA ECX,[EBP + -0x44]
0057bc52  PUSH ECX
0057bc53  MOV EDX,dword ptr [EBP + -0x4c]
0057bc56  MOV EAX,dword ptr [EDX + 0x19d8]
0057bc5c  MOV ECX,dword ptr [EBP + -0x14]
0057bc5f  MOV EDX,dword ptr [EAX + ECX*0x4]
0057bc62  MOV EAX,dword ptr [EBP + -0x4c]
0057bc65  MOV ECX,dword ptr [EAX + 0x19d8]
0057bc6b  MOV EAX,dword ptr [EBP + -0x14]
0057bc6e  MOV ECX,dword ptr [ECX + EAX*0x4]
0057bc71  MOV EDX,dword ptr [EDX]
0057bc73  MOV EAX,dword ptr [EDX + 0x84]
0057bc79  CALL EAX
0057bc7b  MOVZX ECX,AL
0057bc7e  TEST ECX,ECX
0057bc80  JZ 0x0057bd76
0057bc86  MOV EDX,dword ptr [EBP + -0x4c]
0057bc89  MOVZX EAX,byte ptr [EDX + 0x1bc]
0057bc90  TEST EAX,EAX
0057bc92  JZ 0x0057bd76
0057bc98  MOV ECX,dword ptr [EBP + -0x4c]
0057bc9b  MOV EDX,dword ptr [ECX + 0x19e0]
0057bca1  MOV EAX,dword ptr [EDX + 0x1b4]
0057bca7  CMP EAX,dword ptr [EBP + -0x14]
0057bcaa  JZ 0x0057bd62
0057bcb0  MOV ECX,dword ptr [EBP + -0x4c]
0057bcb3  MOV ECX,dword ptr [ECX + 0x19e0]
0057bcb9  CALL 0x0057d3a0
0057bcbe  MOV ECX,dword ptr [EBP + -0x4c]
0057bcc1  CALL 0x005f84f0
0057bcc6  MOV ESI,EAX
0057bcc8  MOV EDX,dword ptr [EBP + -0x4c]
0057bccb  MOV EAX,dword ptr [EDX + 0x19d8]
0057bcd1  MOV ECX,dword ptr [EBP + -0x14]
0057bcd4  MOV EDX,dword ptr [EAX + ECX*0x4]
0057bcd7  MOV EAX,dword ptr [EBP + -0x4c]
0057bcda  MOV ECX,dword ptr [EAX + 0x19d8]
0057bce0  MOV EAX,dword ptr [EBP + -0x14]
0057bce3  MOV ECX,dword ptr [ECX + EAX*0x4]
0057bce6  MOV EDX,dword ptr [EDX]
0057bce8  MOV EAX,dword ptr [EDX + 0x54]
0057bceb  CALL EAX
0057bced  LEA ECX,[ESI + EAX*0x1 + -0x4]
0057bcf1  PUSH ECX
0057bcf2  MOV ECX,dword ptr [EBP + -0x4c]
0057bcf5  CALL 0x005f84d0
0057bcfa  MOV ESI,EAX
0057bcfc  MOV EDX,dword ptr [EBP + -0x4c]
0057bcff  MOV EAX,dword ptr [EDX + 0x19d8]
0057bd05  MOV ECX,dword ptr [EBP + -0x14]
0057bd08  MOV EDX,dword ptr [EAX + ECX*0x4]
0057bd0b  MOV EAX,dword ptr [EBP + -0x4c]
0057bd0e  MOV ECX,dword ptr [EAX + 0x19d8]
0057bd14  MOV EAX,dword ptr [EBP + -0x14]
0057bd17  MOV ECX,dword ptr [ECX + EAX*0x4]
0057bd1a  MOV EDX,dword ptr [EDX]
0057bd1c  MOV EAX,dword ptr [EDX + 0x4c]
0057bd1f  CALL EAX
0057bd21  ADD ESI,EAX
0057bd23  MOV ECX,dword ptr [EBP + -0x4c]
0057bd26  MOV EDX,dword ptr [ECX + 0x19d8]
0057bd2c  MOV EAX,dword ptr [EBP + -0x14]
0057bd2f  MOV ECX,dword ptr [EDX + EAX*0x4]
0057bd32  CALL 0x005f5550
0057bd37  ADD ESI,EAX
0057bd39  PUSH ESI
0057bd3a  MOV ECX,dword ptr [EBP + -0x4c]
0057bd3d  MOV ECX,dword ptr [ECX + 0x19e0]
0057bd43  CALL 0x005f8420
0057bd48  MOV EDX,dword ptr [EBP + -0x14]
0057bd4b  PUSH EDX
0057bd4c  MOV EAX,dword ptr [EBP + -0x4c]
0057bd4f  MOV ECX,dword ptr [EAX + 0x19e0]
0057bd55  CALL 0x0057cb70
0057bd5a  MOV ECX,dword ptr [EBP + -0x4c]
0057bd5d  CALL 0x0057b1b0
0057bd62  MOV dword ptr [EBP + -0x4],0xffffffff
0057bd69  LEA ECX,[EBP + -0x44]
0057bd6c  CALL 0x00610250
0057bd71  JMP 0x0057be68
0057bd76  JMP 0x0057bc34
0057bd7b  MOV ECX,dword ptr [EBP + -0x4c]
0057bd7e  MOVZX EDX,byte ptr [ECX + 0x1bd]
0057bd85  TEST EDX,EDX
0057bd87  JZ 0x0057bd9d
0057bd89  MOV dword ptr [EBP + -0x4],0xffffffff
0057bd90  LEA ECX,[EBP + -0x44]
0057bd93  CALL 0x00610250
0057bd98  JMP 0x0057be68
0057bd9d  MOVZX EAX,byte ptr [EBP + -0x45]
0057bda1  TEST EAX,EAX
0057bda3  JZ 0x0057bde7
0057bda5  MOV ECX,dword ptr [EBP + -0x4c]
0057bda8  MOVZX EDX,byte ptr [ECX + 0x1bc]
0057bdaf  TEST EDX,EDX
0057bdb1  JNZ 0x0057bdd3
0057bdb3  MOV EAX,dword ptr [EBP + -0x4c]
0057bdb6  MOV byte ptr [EAX + 0x1bc],0x1
0057bdbd  MOV ECX,dword ptr [EBP + -0x4c]
0057bdc0  MOV ECX,dword ptr [ECX + 0x19e0]
0057bdc6  CALL 0x0057d3a0
0057bdcb  MOV ECX,dword ptr [EBP + -0x4c]
0057bdce  CALL 0x0057b1b0
0057bdd3  MOV dword ptr [EBP + -0x4],0xffffffff
0057bdda  LEA ECX,[EBP + -0x44]
0057bddd  CALL 0x00610250
0057bde2  JMP 0x0057be68
0057bde7  MOV EDX,dword ptr [EBP + -0x4c]
0057bdea  MOV EAX,dword ptr [EDX + 0x19e0]
0057bdf0  CMP dword ptr [EAX + 0x1b4],-0x1
0057bdf7  JZ 0x0057be24
0057bdf9  MOV ECX,dword ptr [EBP + -0x4c]
0057bdfc  MOV ECX,dword ptr [ECX + 0x19e0]
0057be02  CALL 0x0057d4b0
0057be07  MOVZX EDX,AL
0057be0a  TEST EDX,EDX
0057be0c  JNZ 0x0057be24
0057be0e  MOV EAX,dword ptr [EBP + -0x4c]
0057be11  MOV ECX,dword ptr [EAX + 0x19e0]
0057be17  CALL 0x0057d3a0
0057be1c  MOV ECX,dword ptr [EBP + -0x4c]
0057be1f  CALL 0x0057b1b0
0057be24  MOV ECX,dword ptr [EBP + -0x4c]
0057be27  MOVZX EDX,byte ptr [ECX + 0x1bc]
0057be2e  TEST EDX,EDX
0057be30  JZ 0x0057be59
0057be32  MOV EAX,dword ptr [EBP + -0x4c]
0057be35  MOV ECX,dword ptr [EAX + 0x19e0]
0057be3b  CALL 0x0057d4b0
0057be40  MOVZX ECX,AL
0057be43  TEST ECX,ECX
0057be45  JNZ 0x0057be59
0057be47  MOV EDX,dword ptr [EBP + -0x4c]
0057be4a  MOV byte ptr [EDX + 0x1bc],0x0
0057be51  MOV ECX,dword ptr [EBP + -0x4c]
0057be54  CALL 0x0057b1b0
0057be59  MOV dword ptr [EBP + -0x4],0xffffffff
0057be60  LEA ECX,[EBP + -0x44]
0057be63  CALL 0x00610250
0057be68  MOV ECX,dword ptr [EBP + -0xc]
0057be6b  MOV dword ptr FS:[0x0],ECX
0057be72  POP ECX
0057be73  POP EDI
0057be74  POP ESI
0057be75  MOV ESP,EBP
0057be77  POP EBP
0057be78  RET
