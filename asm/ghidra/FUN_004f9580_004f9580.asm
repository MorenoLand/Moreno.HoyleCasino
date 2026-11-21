; FUN_004f9580  004f9580
004f9580  PUSH EBP
004f9581  MOV EBP,ESP
004f9583  SUB ESP,0x18
004f9586  MOV dword ptr [EBP + -0x18],ECX
004f9589  MOV dword ptr [EBP + -0x14],0x0
004f9590  MOV dword ptr [EBP + -0xc],0x0
004f9597  MOV word ptr [EBP + -0x4],0x0
004f959d  JMP 0x004f95ab
004f959f  MOV AX,word ptr [EBP + -0x4]
004f95a3  ADD AX,0x1
004f95a7  MOV word ptr [EBP + -0x4],AX
004f95ab  MOVSX ECX,word ptr [EBP + -0x4]
004f95af  MOV EDX,dword ptr [EBP + -0x18]
004f95b2  MOVSX EAX,word ptr [EDX + 0x6]
004f95b6  CMP ECX,EAX
004f95b8  JGE 0x004f9627
004f95ba  MOVSX ECX,word ptr [EBP + -0x4]
004f95be  MOV EDX,dword ptr [EBP + -0x18]
004f95c1  MOV EAX,dword ptr [EDX + 0x30]
004f95c4  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f95c8  TEST ECX,ECX
004f95ca  JNZ 0x004f9622
004f95cc  MOVSX EDX,word ptr [EBP + -0x4]
004f95d0  MOV EAX,dword ptr [EBP + -0x18]
004f95d3  MOV ECX,dword ptr [EAX + 0x3c]
004f95d6  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f95da  TEST EDX,EDX
004f95dc  JNZ 0x004f9622
004f95de  MOVSX EAX,word ptr [EBP + -0x4]
004f95e2  MOV ECX,dword ptr [EBP + -0x18]
004f95e5  MOV EDX,dword ptr [ECX + 0x68]
004f95e8  MOV EAX,dword ptr [EDX + EAX*0x4]
004f95eb  CMP EAX,dword ptr [EBP + -0x14]
004f95ee  JG 0x004f9602
004f95f0  MOVSX ECX,word ptr [EBP + -0x4]
004f95f4  MOV EDX,dword ptr [EBP + -0x18]
004f95f7  MOV EAX,dword ptr [EDX + 0x6c]
004f95fa  MOV ECX,dword ptr [EAX + ECX*0x4]
004f95fd  CMP ECX,dword ptr [EBP + -0xc]
004f9600  JLE 0x004f9622
004f9602  MOVSX EDX,word ptr [EBP + -0x4]
004f9606  MOV EAX,dword ptr [EBP + -0x18]
004f9609  MOV ECX,dword ptr [EAX + 0x68]
004f960c  MOV EDX,dword ptr [ECX + EDX*0x4]
004f960f  MOV dword ptr [EBP + -0x14],EDX
004f9612  MOVSX EAX,word ptr [EBP + -0x4]
004f9616  MOV ECX,dword ptr [EBP + -0x18]
004f9619  MOV EDX,dword ptr [ECX + 0x6c]
004f961c  MOV EAX,dword ptr [EDX + EAX*0x4]
004f961f  MOV dword ptr [EBP + -0xc],EAX
004f9622  JMP 0x004f959f
004f9627  MOV ECX,dword ptr [EBP + -0x18]
004f962a  MOV EDX,dword ptr [ECX + 0x28]
004f962d  SUB EDX,dword ptr [EBP + -0xc]
004f9630  MOV dword ptr [EBP + -0x8],EDX
004f9633  MOV EAX,dword ptr [EBP + -0x8]
004f9636  MOV dword ptr [EBP + -0x10],EAX
004f9639  MOV ECX,dword ptr [EBP + -0x18]
004f963c  MOV EDX,dword ptr [ECX + 0xc]
004f963f  SUB EDX,dword ptr [EBP + -0x8]
004f9642  MOV EAX,dword ptr [EBP + -0x18]
004f9645  MOV dword ptr [EAX + 0xc],EDX
004f9648  MOV ECX,dword ptr [EBP + -0x18]
004f964b  MOV EDX,dword ptr [ECX + 0x10]
004f964e  SUB EDX,dword ptr [EBP + -0x8]
004f9651  MOV EAX,dword ptr [EBP + -0x18]
004f9654  MOV dword ptr [EAX + 0x10],EDX
004f9657  MOV word ptr [EBP + -0x4],0x0
004f965d  JMP 0x004f966b
004f965f  MOV CX,word ptr [EBP + -0x4]
004f9663  ADD CX,0x1
004f9667  MOV word ptr [EBP + -0x4],CX
004f966b  MOVSX EDX,word ptr [EBP + -0x4]
004f966f  MOV EAX,dword ptr [EBP + -0x18]
004f9672  MOVSX ECX,word ptr [EAX + 0x6]
004f9676  CMP EDX,ECX
004f9678  JGE 0x004f9752
004f967e  MOVSX EDX,word ptr [EBP + -0x4]
004f9682  MOV EAX,dword ptr [EBP + -0x18]
004f9685  MOV ECX,dword ptr [EAX + 0x3c]
004f9688  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f968c  TEST EDX,EDX
004f968e  JZ 0x004f96c3
004f9690  MOVSX EAX,word ptr [EBP + -0x4]
004f9694  MOV ECX,dword ptr [EBP + -0x18]
004f9697  MOV EDX,dword ptr [ECX + 0x70]
004f969a  MOV dword ptr [EDX + EAX*0x4],0x0
004f96a1  MOVSX EAX,word ptr [EBP + -0x4]
004f96a5  MOV ECX,dword ptr [EBP + -0x18]
004f96a8  MOV EDX,dword ptr [ECX + 0x74]
004f96ab  MOV dword ptr [EDX + EAX*0x4],0x0
004f96b2  MOVSX EAX,word ptr [EBP + -0x4]
004f96b6  MOV ECX,dword ptr [EBP + -0x18]
004f96b9  MOV EDX,dword ptr [ECX + 0x78]
004f96bc  MOV dword ptr [EDX + EAX*0x4],0x0
004f96c3  MOVSX EAX,word ptr [EBP + -0x4]
004f96c7  MOV ECX,dword ptr [EBP + -0x18]
004f96ca  MOV EDX,dword ptr [ECX + 0x68]
004f96cd  MOV EAX,dword ptr [EDX + EAX*0x4]
004f96d0  CMP EAX,dword ptr [EBP + -0x14]
004f96d3  JLE 0x004f9719
004f96d5  MOVSX ECX,word ptr [EBP + -0x4]
004f96d9  MOV EDX,dword ptr [EBP + -0x18]
004f96dc  MOV EAX,dword ptr [EDX + 0x68]
004f96df  MOV ECX,dword ptr [EAX + ECX*0x4]
004f96e2  SUB ECX,dword ptr [EBP + -0x14]
004f96e5  MOV EDX,dword ptr [EBP + -0x18]
004f96e8  MOV EAX,dword ptr [EDX + 0xc]
004f96eb  SUB EAX,ECX
004f96ed  MOV ECX,dword ptr [EBP + -0x18]
004f96f0  MOV dword ptr [ECX + 0xc],EAX
004f96f3  MOVSX EDX,word ptr [EBP + -0x4]
004f96f7  MOV EAX,dword ptr [EBP + -0x18]
004f96fa  MOV ECX,dword ptr [EAX + 0x68]
004f96fd  MOV EDX,dword ptr [ECX + EDX*0x4]
004f9700  SUB EDX,dword ptr [EBP + -0x14]
004f9703  ADD EDX,dword ptr [EBP + -0x10]
004f9706  MOV dword ptr [EBP + -0x10],EDX
004f9709  MOVSX EAX,word ptr [EBP + -0x4]
004f970d  MOV ECX,dword ptr [EBP + -0x18]
004f9710  MOV EDX,dword ptr [ECX + 0x68]
004f9713  MOV ECX,dword ptr [EBP + -0x14]
004f9716  MOV dword ptr [EDX + EAX*0x4],ECX
004f9719  MOVSX EDX,word ptr [EBP + -0x4]
004f971d  MOV EAX,dword ptr [EBP + -0x18]
004f9720  MOV ECX,dword ptr [EAX + 0x30]
004f9723  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f9727  TEST EDX,EDX
004f9729  JNZ 0x004f974d
004f972b  MOVSX EAX,word ptr [EBP + -0x4]
004f972f  MOV ECX,dword ptr [EBP + -0x18]
004f9732  MOV EDX,dword ptr [ECX + 0x6c]
004f9735  MOV EAX,dword ptr [EDX + EAX*0x4]
004f9738  CMP EAX,dword ptr [EBP + -0xc]
004f973b  JLE 0x004f974d
004f973d  MOVSX ECX,word ptr [EBP + -0x4]
004f9741  MOV EDX,dword ptr [EBP + -0x18]
004f9744  MOV EAX,dword ptr [EDX + 0x6c]
004f9747  MOV EDX,dword ptr [EBP + -0xc]
004f974a  MOV dword ptr [EAX + ECX*0x4],EDX
004f974d  JMP 0x004f965f
004f9752  MOV EAX,dword ptr [EBP + -0x10]
004f9755  MOV ESP,EBP
004f9757  POP EBP
004f9758  RET
