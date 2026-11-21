; FUN_004f9220  004f9220
004f9220  PUSH EBP
004f9221  MOV EBP,ESP
004f9223  SUB ESP,0x20
004f9226  PUSH ESI
004f9227  MOV dword ptr [EBP + -0x20],ECX
004f922a  MOV EAX,dword ptr [EBP + -0x20]
004f922d  MOVZX ECX,byte ptr [EAX + 0x1]
004f9231  TEST ECX,ECX
004f9233  JNZ 0x004f924c
004f9235  PUSH 0x5e7
004f923a  PUSH 0x6bfe08
004f923f  PUSH 0x6bfe6c
004f9244  CALL 0x005e9f20
004f9249  ADD ESP,0xc
004f924c  MOV ECX,dword ptr [EBP + -0x20]
004f924f  CALL 0x004f9110
004f9254  MOVSX EAX,AX
004f9257  CMP EAX,0x1
004f925a  JLE 0x004f9273
004f925c  PUSH 0x5e8
004f9261  PUSH 0x6bfe08
004f9266  PUSH 0x6c00b0
004f926b  CALL 0x005e9f20
004f9270  ADD ESP,0xc
004f9273  MOV dword ptr [EBP + -0x10],0x0
004f927a  MOV dword ptr [EBP + -0x14],0x0
004f9281  MOV word ptr [EBP + -0x18],0x0
004f9287  JMP 0x004f9295
004f9289  MOV DX,word ptr [EBP + -0x18]
004f928d  ADD DX,0x1
004f9291  MOV word ptr [EBP + -0x18],DX
004f9295  MOVSX EAX,word ptr [EBP + -0x18]
004f9299  MOV ECX,dword ptr [EBP + -0x20]
004f929c  MOVSX EDX,word ptr [ECX + 0x6]
004f92a0  CMP EAX,EDX
004f92a2  JGE 0x004f931c
004f92a4  MOVSX EAX,word ptr [EBP + -0x18]
004f92a8  MOV ECX,dword ptr [EBP + -0x20]
004f92ab  MOV EDX,dword ptr [ECX + 0x30]
004f92ae  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f92b2  TEST EAX,EAX
004f92b4  JNZ 0x004f9317
004f92b6  MOVSX ECX,word ptr [EBP + -0x18]
004f92ba  MOV EDX,dword ptr [EBP + -0x20]
004f92bd  MOV EAX,dword ptr [EDX + 0x68]
004f92c0  MOV ECX,dword ptr [EAX + ECX*0x4]
004f92c3  CMP ECX,dword ptr [EBP + -0x10]
004f92c6  JG 0x004f92ec
004f92c8  MOVSX EDX,word ptr [EBP + -0x18]
004f92cc  MOV EAX,dword ptr [EBP + -0x20]
004f92cf  MOV ECX,dword ptr [EAX + 0x68]
004f92d2  MOV EDX,dword ptr [ECX + EDX*0x4]
004f92d5  CMP EDX,dword ptr [EBP + -0x10]
004f92d8  JNZ 0x004f9317
004f92da  MOVSX EAX,word ptr [EBP + -0x18]
004f92de  MOV ECX,dword ptr [EBP + -0x20]
004f92e1  MOV EDX,dword ptr [ECX + 0x6c]
004f92e4  MOV EAX,dword ptr [EDX + EAX*0x4]
004f92e7  CMP EAX,dword ptr [EBP + -0x14]
004f92ea  JLE 0x004f9317
004f92ec  MOVSX ECX,word ptr [EBP + -0x18]
004f92f0  MOV EDX,dword ptr [EBP + -0x20]
004f92f3  MOV EAX,dword ptr [EDX + 0x68]
004f92f6  MOV ECX,dword ptr [EAX + ECX*0x4]
004f92f9  MOV dword ptr [EBP + -0x10],ECX
004f92fc  MOVSX EDX,word ptr [EBP + -0x18]
004f9300  MOV EAX,dword ptr [EBP + -0x20]
004f9303  MOV ECX,dword ptr [EAX + 0x6c]
004f9306  MOV EDX,dword ptr [ECX + EDX*0x4]
004f9309  MOV dword ptr [EBP + -0x14],EDX
004f930c  MOV EAX,dword ptr [EBP + -0x20]
004f930f  MOV CX,word ptr [EBP + -0x18]
004f9313  MOV word ptr [EAX + 0x20],CX
004f9317  JMP 0x004f9289
004f931c  MOV dword ptr [EBP + -0x1c],0x0
004f9323  MOV dword ptr [EBP + -0xc],0x0
004f932a  MOV word ptr [EBP + -0x4],0x0
004f9330  MOV word ptr [EBP + -0x18],0x0
004f9336  JMP 0x004f9344
004f9338  MOV DX,word ptr [EBP + -0x18]
004f933c  ADD DX,0x1
004f9340  MOV word ptr [EBP + -0x18],DX
004f9344  MOVSX EAX,word ptr [EBP + -0x18]
004f9348  MOV ECX,dword ptr [EBP + -0x20]
004f934b  MOVSX EDX,word ptr [ECX + 0x6]
004f934f  CMP EAX,EDX
004f9351  JGE 0x004f93dd
004f9357  MOVSX EAX,word ptr [EBP + -0x18]
004f935b  MOV ECX,dword ptr [EBP + -0x20]
004f935e  MOVSX EDX,word ptr [ECX + 0x20]
004f9362  CMP EAX,EDX
004f9364  JNZ 0x004f9368
004f9366  JMP 0x004f9338
004f9368  MOVSX EAX,word ptr [EBP + -0x18]
004f936c  MOV ECX,dword ptr [EBP + -0x20]
004f936f  MOV EDX,dword ptr [ECX + 0x30]
004f9372  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f9376  TEST EAX,EAX
004f9378  JNZ 0x004f93d8
004f937a  MOVSX ECX,word ptr [EBP + -0x18]
004f937e  MOV EDX,dword ptr [EBP + -0x20]
004f9381  MOV EAX,dword ptr [EDX + 0x68]
004f9384  MOV ECX,dword ptr [EAX + ECX*0x4]
004f9387  CMP ECX,dword ptr [EBP + -0x1c]
004f938a  JG 0x004f93b0
004f938c  MOVSX EDX,word ptr [EBP + -0x18]
004f9390  MOV EAX,dword ptr [EBP + -0x20]
004f9393  MOV ECX,dword ptr [EAX + 0x68]
004f9396  MOV EDX,dword ptr [ECX + EDX*0x4]
004f9399  CMP EDX,dword ptr [EBP + -0x1c]
004f939c  JNZ 0x004f93d8
004f939e  MOVSX EAX,word ptr [EBP + -0x18]
004f93a2  MOV ECX,dword ptr [EBP + -0x20]
004f93a5  MOV EDX,dword ptr [ECX + 0x6c]
004f93a8  MOV EAX,dword ptr [EDX + EAX*0x4]
004f93ab  CMP EAX,dword ptr [EBP + -0xc]
004f93ae  JLE 0x004f93d8
004f93b0  MOVSX ECX,word ptr [EBP + -0x18]
004f93b4  MOV EDX,dword ptr [EBP + -0x20]
004f93b7  MOV EAX,dword ptr [EDX + 0x68]
004f93ba  MOV ECX,dword ptr [EAX + ECX*0x4]
004f93bd  MOV dword ptr [EBP + -0x1c],ECX
004f93c0  MOVSX EDX,word ptr [EBP + -0x18]
004f93c4  MOV EAX,dword ptr [EBP + -0x20]
004f93c7  MOV ECX,dword ptr [EAX + 0x6c]
004f93ca  MOV EDX,dword ptr [ECX + EDX*0x4]
004f93cd  MOV dword ptr [EBP + -0xc],EDX
004f93d0  MOV AX,word ptr [EBP + -0x18]
004f93d4  MOV word ptr [EBP + -0x4],AX
004f93d8  JMP 0x004f9338
004f93dd  MOV ECX,dword ptr [EBP + -0x20]
004f93e0  MOVSX EDX,word ptr [ECX + 0x20]
004f93e4  MOV EAX,dword ptr [EBP + -0x20]
004f93e7  MOV ECX,dword ptr [EAX + 0x68]
004f93ea  MOVSX EAX,word ptr [EBP + -0x4]
004f93ee  MOV ESI,dword ptr [EBP + -0x20]
004f93f1  MOV ESI,dword ptr [ESI + 0x68]
004f93f4  MOV ECX,dword ptr [ECX + EDX*0x4]
004f93f7  SUB ECX,dword ptr [ESI + EAX*0x4]
004f93fa  MOV EDX,dword ptr [EBP + -0x20]
004f93fd  MOV dword ptr [EDX + 0x1c],ECX
004f9400  MOV EAX,dword ptr [EBP + -0x20]
004f9403  MOVSX ECX,word ptr [EAX + 0x20]
004f9407  MOV EDX,dword ptr [EBP + -0x20]
004f940a  MOV EAX,dword ptr [EDX + 0x68]
004f940d  MOV EDX,dword ptr [EBP + -0x20]
004f9410  MOV EAX,dword ptr [EAX + ECX*0x4]
004f9413  SUB EAX,dword ptr [EDX + 0x1c]
004f9416  MOV ECX,dword ptr [EBP + -0x20]
004f9419  MOVSX EDX,word ptr [ECX + 0x20]
004f941d  MOV ECX,dword ptr [EBP + -0x20]
004f9420  MOV ECX,dword ptr [ECX + 0x68]
004f9423  MOV dword ptr [ECX + EDX*0x4],EAX
004f9426  MOV EDX,dword ptr [EBP + -0x20]
004f9429  MOV EAX,dword ptr [EBP + -0x20]
004f942c  MOV ECX,dword ptr [EDX + 0xc]
004f942f  SUB ECX,dword ptr [EAX + 0x1c]
004f9432  MOV EDX,dword ptr [EBP + -0x20]
004f9435  MOV dword ptr [EDX + 0xc],ECX
004f9438  MOV EAX,dword ptr [EBP + -0x20]
004f943b  MOVSX ECX,word ptr [EAX + 0x20]
004f943f  MOV EDX,dword ptr [EBP + -0x20]
004f9442  MOV EAX,dword ptr [EDX + 0x6c]
004f9445  MOVSX EDX,word ptr [EBP + -0x4]
004f9449  MOV ESI,dword ptr [EBP + -0x20]
004f944c  MOV ESI,dword ptr [ESI + 0x6c]
004f944f  MOV EAX,dword ptr [EAX + ECX*0x4]
004f9452  SUB EAX,dword ptr [ESI + EDX*0x4]
004f9455  MOV dword ptr [EBP + -0x8],EAX
004f9458  MOV ECX,dword ptr [EBP + -0x20]
004f945b  MOV EDX,dword ptr [ECX + 0xc]
004f945e  SUB EDX,dword ptr [EBP + -0x8]
004f9461  MOV EAX,dword ptr [EBP + -0x20]
004f9464  MOV dword ptr [EAX + 0xc],EDX
004f9467  MOV ECX,dword ptr [EBP + -0x20]
004f946a  MOV EDX,dword ptr [ECX + 0x10]
004f946d  SUB EDX,dword ptr [EBP + -0x8]
004f9470  MOV EAX,dword ptr [EBP + -0x20]
004f9473  MOV dword ptr [EAX + 0x10],EDX
004f9476  MOV ECX,dword ptr [EBP + -0x20]
004f9479  MOVSX EDX,word ptr [ECX + 0x20]
004f947d  MOV EAX,dword ptr [EBP + -0x20]
004f9480  MOV ECX,dword ptr [EAX + 0x6c]
004f9483  MOV EDX,dword ptr [ECX + EDX*0x4]
004f9486  SUB EDX,dword ptr [EBP + -0x8]
004f9489  MOV EAX,dword ptr [EBP + -0x20]
004f948c  MOVSX ECX,word ptr [EAX + 0x20]
004f9490  MOV EAX,dword ptr [EBP + -0x20]
004f9493  MOV EAX,dword ptr [EAX + 0x6c]
004f9496  MOV dword ptr [EAX + ECX*0x4],EDX
004f9499  MOV ECX,dword ptr [EBP + -0x20]
004f949c  MOV EDX,dword ptr [ECX + 0x1c]
004f949f  ADD EDX,dword ptr [EBP + -0x8]
004f94a2  MOV EAX,dword ptr [EBP + -0x20]
004f94a5  MOV dword ptr [EAX + 0x1c],EDX
004f94a8  MOV word ptr [EBP + -0x18],0x0
004f94ae  JMP 0x004f94bc
004f94b0  MOV CX,word ptr [EBP + -0x18]
004f94b4  ADD CX,0x1
004f94b8  MOV word ptr [EBP + -0x18],CX
004f94bc  MOVSX EDX,word ptr [EBP + -0x18]
004f94c0  MOV EAX,dword ptr [EBP + -0x20]
004f94c3  MOVSX ECX,word ptr [EAX + 0x6]
004f94c7  CMP EDX,ECX
004f94c9  JGE 0x004f957a
004f94cf  MOVSX EDX,word ptr [EBP + -0x18]
004f94d3  MOV EAX,dword ptr [EBP + -0x20]
004f94d6  MOV ECX,dword ptr [EAX + 0x30]
004f94d9  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f94dd  TEST EDX,EDX
004f94df  JZ 0x004f9575
004f94e5  MOVSX EAX,word ptr [EBP + -0x18]
004f94e9  MOV ECX,dword ptr [EBP + -0x20]
004f94ec  MOV EDX,dword ptr [ECX + 0x68]
004f94ef  MOV ECX,dword ptr [EBP + -0x20]
004f94f2  MOVSX ECX,word ptr [ECX + 0x20]
004f94f6  MOV ESI,dword ptr [EBP + -0x20]
004f94f9  MOV ESI,dword ptr [ESI + 0x68]
004f94fc  MOV EDX,dword ptr [EDX + EAX*0x4]
004f94ff  CMP EDX,dword ptr [ESI + ECX*0x4]
004f9502  JLE 0x004f9575
004f9504  MOVSX EAX,word ptr [EBP + -0x18]
004f9508  MOV ECX,dword ptr [EBP + -0x20]
004f950b  MOV EDX,dword ptr [ECX + 0x68]
004f950e  MOV ECX,dword ptr [EBP + -0x20]
004f9511  MOVSX ECX,word ptr [ECX + 0x20]
004f9515  MOV ESI,dword ptr [EBP + -0x20]
004f9518  MOV ESI,dword ptr [ESI + 0x68]
004f951b  MOV EDX,dword ptr [EDX + EAX*0x4]
004f951e  SUB EDX,dword ptr [ESI + ECX*0x4]
004f9521  MOV EAX,dword ptr [EBP + -0x20]
004f9524  ADD EDX,dword ptr [EAX + 0x1c]
004f9527  MOV ECX,dword ptr [EBP + -0x20]
004f952a  MOV dword ptr [ECX + 0x1c],EDX
004f952d  MOVSX EDX,word ptr [EBP + -0x18]
004f9531  MOV EAX,dword ptr [EBP + -0x20]
004f9534  MOV ECX,dword ptr [EAX + 0x68]
004f9537  MOV EAX,dword ptr [EBP + -0x20]
004f953a  MOVSX EAX,word ptr [EAX + 0x20]
004f953e  MOV ESI,dword ptr [EBP + -0x20]
004f9541  MOV ESI,dword ptr [ESI + 0x68]
004f9544  MOV ECX,dword ptr [ECX + EDX*0x4]
004f9547  SUB ECX,dword ptr [ESI + EAX*0x4]
004f954a  MOV EDX,dword ptr [EBP + -0x20]
004f954d  MOV EAX,dword ptr [EDX + 0xc]
004f9550  SUB EAX,ECX
004f9552  MOV ECX,dword ptr [EBP + -0x20]
004f9555  MOV dword ptr [ECX + 0xc],EAX
004f9558  MOV EDX,dword ptr [EBP + -0x20]
004f955b  MOVSX EAX,word ptr [EDX + 0x20]
004f955f  MOV ECX,dword ptr [EBP + -0x20]
004f9562  MOV EDX,dword ptr [ECX + 0x68]
004f9565  MOVSX ECX,word ptr [EBP + -0x18]
004f9569  MOV ESI,dword ptr [EBP + -0x20]
004f956c  MOV ESI,dword ptr [ESI + 0x68]
004f956f  MOV EDX,dword ptr [EDX + EAX*0x4]
004f9572  MOV dword ptr [ESI + ECX*0x4],EDX
004f9575  JMP 0x004f94b0
004f957a  POP ESI
004f957b  MOV ESP,EBP
004f957d  POP EBP
004f957e  RET
