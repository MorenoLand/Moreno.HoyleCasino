; FUN_004c9300  004c9300
004c9300  PUSH EBP
004c9301  MOV EBP,ESP
004c9303  SUB ESP,0x8
004c9306  MOV dword ptr [EBP + -0x4],ECX
004c9309  MOVSX EAX,word ptr [EBP + 0x8]
004c930d  TEST EAX,EAX
004c930f  JNZ 0x004c9322
004c9311  PUSH 0xa
004c9313  CALL 0x0062fbf0
004c9318  ADD ESP,0x4
004c931b  ADD EAX,0x1
004c931e  MOV word ptr [EBP + 0x8],AX
004c9322  MOVSX ECX,word ptr [EBP + 0x8]
004c9326  TEST ECX,ECX
004c9328  JLE 0x004c9333
004c932a  MOVSX EDX,word ptr [EBP + 0x8]
004c932e  CMP EDX,0xa
004c9331  JLE 0x004c934a
004c9333  PUSH 0x586
004c9338  PUSH 0x6bf384
004c933d  PUSH 0x6bf6d8
004c9342  CALL 0x005e9f20
004c9347  ADD ESP,0xc
004c934a  MOVSX ECX,word ptr [EBP + 0x8]
004c934e  MOV dword ptr [EBP + -0x8],ECX
004c9351  MOV EDX,dword ptr [EBP + -0x8]
004c9354  SUB EDX,0x1
004c9357  MOV dword ptr [EBP + -0x8],EDX
004c935a  CMP dword ptr [EBP + -0x8],0x9
004c935e  JA 0x004c9aa3
004c9364  MOV EAX,dword ptr [EBP + -0x8]
004c9367  JMP dword ptr [EAX*0x4 + 0x4c9bac]
004c936e  MOV ECX,dword ptr [EBP + -0x4]
004c9371  MOV word ptr [ECX + 0x9a],0x2
004c937a  MOV EDX,dword ptr [EBP + -0x4]
004c937d  MOV word ptr [EDX + 0xa0],0x1c
004c9386  MOV EAX,dword ptr [EBP + -0x4]
004c9389  MOV word ptr [EAX + 0xa6],0x28
004c9392  MOV ECX,dword ptr [EBP + -0x4]
004c9395  MOV word ptr [ECX + 0xac],0x14
004c939e  MOV EDX,dword ptr [EBP + -0x4]
004c93a1  MOV word ptr [EDX + 0xb2],0xa
004c93aa  MOV EAX,dword ptr [EBP + -0x4]
004c93ad  MOV word ptr [EAX + 0x9c],0x1
004c93b6  MOV ECX,dword ptr [EBP + -0x4]
004c93b9  MOV word ptr [ECX + 0xa2],0x13
004c93c2  MOV EDX,dword ptr [EBP + -0x4]
004c93c5  MOV word ptr [EDX + 0xa8],0x23
004c93ce  MOV EAX,dword ptr [EBP + -0x4]
004c93d1  MOV word ptr [EAX + 0xae],0x19
004c93da  MOV ECX,dword ptr [EBP + -0x4]
004c93dd  MOV word ptr [ECX + 0xb4],0x14
004c93e6  MOV EDX,dword ptr [EBP + -0x4]
004c93e9  MOV word ptr [EDX + 0x9e],0x1
004c93f2  MOV EAX,dword ptr [EBP + -0x4]
004c93f5  MOV word ptr [EAX + 0xa4],0xe
004c93fe  MOV ECX,dword ptr [EBP + -0x4]
004c9401  MOV word ptr [ECX + 0xaa],0x1e
004c940a  MOV EDX,dword ptr [EBP + -0x4]
004c940d  MOV word ptr [EDX + 0xb0],0x1e
004c9416  MOV EAX,dword ptr [EBP + -0x4]
004c9419  MOV word ptr [EAX + 0xb6],0x19
004c9422  JMP 0x004c9aa3
004c9427  MOV ECX,dword ptr [EBP + -0x4]
004c942a  MOV word ptr [ECX + 0x9a],0xa
004c9433  MOV EDX,dword ptr [EBP + -0x4]
004c9436  MOV word ptr [EDX + 0xa0],0x1e
004c943f  MOV EAX,dword ptr [EBP + -0x4]
004c9442  MOV word ptr [EAX + 0xa6],0x1e
004c944b  MOV ECX,dword ptr [EBP + -0x4]
004c944e  MOV word ptr [ECX + 0xac],0x14
004c9457  MOV EDX,dword ptr [EBP + -0x4]
004c945a  MOV word ptr [EDX + 0xb2],0xa
004c9463  MOV EAX,dword ptr [EBP + -0x4]
004c9466  MOV word ptr [EAX + 0x9c],0xa
004c946f  MOV ECX,dword ptr [EBP + -0x4]
004c9472  MOV word ptr [ECX + 0xa2],0xa
004c947b  MOV EDX,dword ptr [EBP + -0x4]
004c947e  MOV word ptr [EDX + 0xa8],0x23
004c9487  MOV EAX,dword ptr [EBP + -0x4]
004c948a  MOV word ptr [EAX + 0xae],0x1e
004c9493  MOV ECX,dword ptr [EBP + -0x4]
004c9496  MOV word ptr [ECX + 0xb4],0xf
004c949f  MOV EDX,dword ptr [EBP + -0x4]
004c94a2  MOV word ptr [EDX + 0x9e],0x2
004c94ab  MOV EAX,dword ptr [EBP + -0x4]
004c94ae  MOV word ptr [EAX + 0xa4],0x12
004c94b7  MOV ECX,dword ptr [EBP + -0x4]
004c94ba  MOV word ptr [ECX + 0xaa],0x19
004c94c3  MOV EDX,dword ptr [EBP + -0x4]
004c94c6  MOV word ptr [EDX + 0xb0],0x23
004c94cf  MOV EAX,dword ptr [EBP + -0x4]
004c94d2  MOV word ptr [EAX + 0xb6],0x14
004c94db  JMP 0x004c9aa3
004c94e0  MOV ECX,dword ptr [EBP + -0x4]
004c94e3  MOV word ptr [ECX + 0x9a],0x2
004c94ec  MOV EDX,dword ptr [EBP + -0x4]
004c94ef  MOV word ptr [EDX + 0xa0],0x1c
004c94f8  MOV EAX,dword ptr [EBP + -0x4]
004c94fb  MOV word ptr [EAX + 0xa6],0x1e
004c9504  MOV ECX,dword ptr [EBP + -0x4]
004c9507  MOV word ptr [ECX + 0xac],0x14
004c9510  MOV EDX,dword ptr [EBP + -0x4]
004c9513  MOV word ptr [EDX + 0xb2],0x14
004c951c  MOV EAX,dword ptr [EBP + -0x4]
004c951f  MOV word ptr [EAX + 0x9c],0x1
004c9528  MOV ECX,dword ptr [EBP + -0x4]
004c952b  MOV word ptr [ECX + 0xa2],0xe
004c9534  MOV EDX,dword ptr [EBP + -0x4]
004c9537  MOV word ptr [EDX + 0xa8],0x19
004c9540  MOV EAX,dword ptr [EBP + -0x4]
004c9543  MOV word ptr [EAX + 0xae],0x1e
004c954c  MOV ECX,dword ptr [EBP + -0x4]
004c954f  MOV word ptr [ECX + 0xb4],0x1e
004c9558  MOV EDX,dword ptr [EBP + -0x4]
004c955b  MOV word ptr [EDX + 0x9e],0x1
004c9564  MOV EAX,dword ptr [EBP + -0x4]
004c9567  MOV word ptr [EAX + 0xa4],0x9
004c9570  MOV ECX,dword ptr [EBP + -0x4]
004c9573  MOV word ptr [ECX + 0xaa],0x19
004c957c  MOV EDX,dword ptr [EBP + -0x4]
004c957f  MOV word ptr [EDX + 0xb0],0x1e
004c9588  MOV EAX,dword ptr [EBP + -0x4]
004c958b  MOV word ptr [EAX + 0xb6],0x23
004c9594  JMP 0x004c9aa3
004c9599  MOV ECX,dword ptr [EBP + -0x4]
004c959c  MOV word ptr [ECX + 0x9a],0x2
004c95a5  MOV EDX,dword ptr [EBP + -0x4]
004c95a8  MOV word ptr [EDX + 0xa0],0x1c
004c95b1  MOV EAX,dword ptr [EBP + -0x4]
004c95b4  MOV word ptr [EAX + 0xa6],0x19
004c95bd  MOV ECX,dword ptr [EBP + -0x4]
004c95c0  MOV word ptr [ECX + 0xac],0x14
004c95c9  MOV EDX,dword ptr [EBP + -0x4]
004c95cc  MOV word ptr [EDX + 0xb2],0x19
004c95d5  MOV EAX,dword ptr [EBP + -0x4]
004c95d8  MOV word ptr [EAX + 0x9c],0x5
004c95e1  MOV ECX,dword ptr [EBP + -0x4]
004c95e4  MOV word ptr [ECX + 0xa2],0x2
004c95ed  MOV EDX,dword ptr [EBP + -0x4]
004c95f0  MOV word ptr [EDX + 0xa8],0x21
004c95f9  MOV EAX,dword ptr [EBP + -0x4]
004c95fc  MOV word ptr [EAX + 0xae],0x1e
004c9605  MOV ECX,dword ptr [EBP + -0x4]
004c9608  MOV word ptr [ECX + 0xb4],0x1e
004c9611  MOV EDX,dword ptr [EBP + -0x4]
004c9614  MOV word ptr [EDX + 0x9e],0x5
004c961d  MOV EAX,dword ptr [EBP + -0x4]
004c9620  MOV word ptr [EAX + 0xa4],0x1
004c9629  MOV ECX,dword ptr [EBP + -0x4]
004c962c  MOV word ptr [ECX + 0xaa],0x1d
004c9635  MOV EDX,dword ptr [EBP + -0x4]
004c9638  MOV word ptr [EDX + 0xb0],0x1e
004c9641  MOV EAX,dword ptr [EBP + -0x4]
004c9644  MOV word ptr [EAX + 0xb6],0x23
004c964d  JMP 0x004c9aa3
004c9652  MOV ECX,dword ptr [EBP + -0x4]
004c9655  MOV word ptr [ECX + 0x9a],0x5
004c965e  MOV EDX,dword ptr [EBP + -0x4]
004c9661  MOV word ptr [EDX + 0xa0],0x19
004c966a  MOV EAX,dword ptr [EBP + -0x4]
004c966d  MOV word ptr [EAX + 0xa6],0x28
004c9676  MOV ECX,dword ptr [EBP + -0x4]
004c9679  MOV word ptr [ECX + 0xac],0x19
004c9682  MOV EDX,dword ptr [EBP + -0x4]
004c9685  MOV word ptr [EDX + 0xb2],0x5
004c968e  MOV EAX,dword ptr [EBP + -0x4]
004c9691  MOV word ptr [EAX + 0x9c],0x1
004c969a  MOV ECX,dword ptr [EBP + -0x4]
004c969d  MOV word ptr [ECX + 0xa2],0x13
004c96a6  MOV EDX,dword ptr [EBP + -0x4]
004c96a9  MOV word ptr [EDX + 0xa8],0x28
004c96b2  MOV EAX,dword ptr [EBP + -0x4]
004c96b5  MOV word ptr [EAX + 0xae],0x19
004c96be  MOV ECX,dword ptr [EBP + -0x4]
004c96c1  MOV word ptr [ECX + 0xb4],0xf
004c96ca  MOV EDX,dword ptr [EBP + -0x4]
004c96cd  MOV word ptr [EDX + 0x9e],0x1
004c96d6  MOV EAX,dword ptr [EBP + -0x4]
004c96d9  MOV word ptr [EAX + 0xa4],0xe
004c96e2  MOV ECX,dword ptr [EBP + -0x4]
004c96e5  MOV word ptr [ECX + 0xaa],0x1e
004c96ee  MOV EDX,dword ptr [EBP + -0x4]
004c96f1  MOV word ptr [EDX + 0xb0],0x23
004c96fa  MOV EAX,dword ptr [EBP + -0x4]
004c96fd  MOV word ptr [EAX + 0xb6],0x14
004c9706  JMP 0x004c9aa3
004c970b  MOV ECX,dword ptr [EBP + -0x4]
004c970e  MOV word ptr [ECX + 0x9a],0xa
004c9717  MOV EDX,dword ptr [EBP + -0x4]
004c971a  MOV word ptr [EDX + 0xa0],0x28
004c9723  MOV EAX,dword ptr [EBP + -0x4]
004c9726  MOV word ptr [EAX + 0xa6],0x14
004c972f  MOV ECX,dword ptr [EBP + -0x4]
004c9732  MOV word ptr [ECX + 0xac],0x14
004c973b  MOV EDX,dword ptr [EBP + -0x4]
004c973e  MOV word ptr [EDX + 0xb2],0xa
004c9747  MOV EAX,dword ptr [EBP + -0x4]
004c974a  MOV word ptr [EAX + 0x9c],0x2
004c9753  MOV ECX,dword ptr [EBP + -0x4]
004c9756  MOV word ptr [ECX + 0xa2],0x1b
004c975f  MOV EDX,dword ptr [EBP + -0x4]
004c9762  MOV word ptr [EDX + 0xa8],0x1a
004c976b  MOV EAX,dword ptr [EBP + -0x4]
004c976e  MOV word ptr [EAX + 0xae],0x1e
004c9777  MOV ECX,dword ptr [EBP + -0x4]
004c977a  MOV word ptr [ECX + 0xb4],0xf
004c9783  MOV EDX,dword ptr [EBP + -0x4]
004c9786  MOV word ptr [EDX + 0x9e],0x1
004c978f  MOV EAX,dword ptr [EBP + -0x4]
004c9792  MOV word ptr [EAX + 0xa4],0x16
004c979b  MOV ECX,dword ptr [EBP + -0x4]
004c979e  MOV word ptr [ECX + 0xaa],0x1e
004c97a7  MOV EDX,dword ptr [EBP + -0x4]
004c97aa  MOV word ptr [EDX + 0xb0],0x1a
004c97b3  MOV EAX,dword ptr [EBP + -0x4]
004c97b6  MOV word ptr [EAX + 0xb6],0x15
004c97bf  JMP 0x004c9aa3
004c97c4  MOV ECX,dword ptr [EBP + -0x4]
004c97c7  MOV word ptr [ECX + 0x9a],0x2
004c97d0  MOV EDX,dword ptr [EBP + -0x4]
004c97d3  MOV word ptr [EDX + 0xa0],0x1c
004c97dc  MOV EAX,dword ptr [EBP + -0x4]
004c97df  MOV word ptr [EAX + 0xa6],0x28
004c97e8  MOV ECX,dword ptr [EBP + -0x4]
004c97eb  MOV word ptr [ECX + 0xac],0x14
004c97f4  MOV EDX,dword ptr [EBP + -0x4]
004c97f7  MOV word ptr [EDX + 0xb2],0xa
004c9800  MOV EAX,dword ptr [EBP + -0x4]
004c9803  MOV word ptr [EAX + 0x9c],0x1
004c980c  MOV ECX,dword ptr [EBP + -0x4]
004c980f  MOV word ptr [ECX + 0xa2],0x13
004c9818  MOV EDX,dword ptr [EBP + -0x4]
004c981b  MOV word ptr [EDX + 0xa8],0x23
004c9824  MOV EAX,dword ptr [EBP + -0x4]
004c9827  MOV word ptr [EAX + 0xae],0x19
004c9830  MOV ECX,dword ptr [EBP + -0x4]
004c9833  MOV word ptr [ECX + 0xb4],0x14
004c983c  MOV EDX,dword ptr [EBP + -0x4]
004c983f  MOV word ptr [EDX + 0x9e],0x1
004c9848  MOV EAX,dword ptr [EBP + -0x4]
004c984b  MOV word ptr [EAX + 0xa4],0xe
004c9854  MOV ECX,dword ptr [EBP + -0x4]
004c9857  MOV word ptr [ECX + 0xaa],0x1e
004c9860  MOV EDX,dword ptr [EBP + -0x4]
004c9863  MOV word ptr [EDX + 0xb0],0x1e
004c986c  MOV EAX,dword ptr [EBP + -0x4]
004c986f  MOV word ptr [EAX + 0xb6],0x19
004c9878  JMP 0x004c9aa3
004c987d  MOV ECX,dword ptr [EBP + -0x4]
004c9880  MOV word ptr [ECX + 0x9a],0x2
004c9889  MOV EDX,dword ptr [EBP + -0x4]
004c988c  MOV word ptr [EDX + 0xa0],0x1c
004c9895  MOV EAX,dword ptr [EBP + -0x4]
004c9898  MOV word ptr [EAX + 0xa6],0x28
004c98a1  MOV ECX,dword ptr [EBP + -0x4]
004c98a4  MOV word ptr [ECX + 0xac],0x14
004c98ad  MOV EDX,dword ptr [EBP + -0x4]
004c98b0  MOV word ptr [EDX + 0xb2],0xa
004c98b9  MOV EAX,dword ptr [EBP + -0x4]
004c98bc  MOV word ptr [EAX + 0x9c],0x1
004c98c5  MOV ECX,dword ptr [EBP + -0x4]
004c98c8  MOV word ptr [ECX + 0xa2],0x13
004c98d1  MOV EDX,dword ptr [EBP + -0x4]
004c98d4  MOV word ptr [EDX + 0xa8],0x23
004c98dd  MOV EAX,dword ptr [EBP + -0x4]
004c98e0  MOV word ptr [EAX + 0xae],0x19
004c98e9  MOV ECX,dword ptr [EBP + -0x4]
004c98ec  MOV word ptr [ECX + 0xb4],0x14
004c98f5  MOV EDX,dword ptr [EBP + -0x4]
004c98f8  MOV word ptr [EDX + 0x9e],0x1
004c9901  MOV EAX,dword ptr [EBP + -0x4]
004c9904  MOV word ptr [EAX + 0xa4],0xe
004c990d  MOV ECX,dword ptr [EBP + -0x4]
004c9910  MOV word ptr [ECX + 0xaa],0x1e
004c9919  MOV EDX,dword ptr [EBP + -0x4]
004c991c  MOV word ptr [EDX + 0xb0],0x1e
004c9925  MOV EAX,dword ptr [EBP + -0x4]
004c9928  MOV word ptr [EAX + 0xb6],0x19
004c9931  JMP 0x004c9aa3
004c9936  MOV ECX,dword ptr [EBP + -0x4]
004c9939  MOV word ptr [ECX + 0x9a],0x2
004c9942  MOV EDX,dword ptr [EBP + -0x4]
004c9945  MOV word ptr [EDX + 0xa0],0x1c
004c994e  MOV EAX,dword ptr [EBP + -0x4]
004c9951  MOV word ptr [EAX + 0xa6],0x28
004c995a  MOV ECX,dword ptr [EBP + -0x4]
004c995d  MOV word ptr [ECX + 0xac],0x14
004c9966  MOV EDX,dword ptr [EBP + -0x4]
004c9969  MOV word ptr [EDX + 0xb2],0xa
004c9972  MOV EAX,dword ptr [EBP + -0x4]
004c9975  MOV word ptr [EAX + 0x9c],0x1
004c997e  MOV ECX,dword ptr [EBP + -0x4]
004c9981  MOV word ptr [ECX + 0xa2],0x13
004c998a  MOV EDX,dword ptr [EBP + -0x4]
004c998d  MOV word ptr [EDX + 0xa8],0x23
004c9996  MOV EAX,dword ptr [EBP + -0x4]
004c9999  MOV word ptr [EAX + 0xae],0x19
004c99a2  MOV ECX,dword ptr [EBP + -0x4]
004c99a5  MOV word ptr [ECX + 0xb4],0x14
004c99ae  MOV EDX,dword ptr [EBP + -0x4]
004c99b1  MOV word ptr [EDX + 0x9e],0x1
004c99ba  MOV EAX,dword ptr [EBP + -0x4]
004c99bd  MOV word ptr [EAX + 0xa4],0xe
004c99c6  MOV ECX,dword ptr [EBP + -0x4]
004c99c9  MOV word ptr [ECX + 0xaa],0x1e
004c99d2  MOV EDX,dword ptr [EBP + -0x4]
004c99d5  MOV word ptr [EDX + 0xb0],0x1e
004c99de  MOV EAX,dword ptr [EBP + -0x4]
004c99e1  MOV word ptr [EAX + 0xb6],0x19
004c99ea  JMP 0x004c9aa3
004c99ef  MOV ECX,dword ptr [EBP + -0x4]
004c99f2  MOV word ptr [ECX + 0x9a],0x2
004c99fb  MOV EDX,dword ptr [EBP + -0x4]
004c99fe  MOV word ptr [EDX + 0xa0],0x12
004c9a07  MOV EAX,dword ptr [EBP + -0x4]
004c9a0a  MOV word ptr [EAX + 0xa6],0x28
004c9a13  MOV ECX,dword ptr [EBP + -0x4]
004c9a16  MOV word ptr [ECX + 0xac],0x1e
004c9a1f  MOV EDX,dword ptr [EBP + -0x4]
004c9a22  MOV word ptr [EDX + 0xb2],0xa
004c9a2b  MOV EAX,dword ptr [EBP + -0x4]
004c9a2e  MOV word ptr [EAX + 0x9c],0x1
004c9a37  MOV ECX,dword ptr [EBP + -0x4]
004c9a3a  MOV word ptr [ECX + 0xa2],0xe
004c9a43  MOV EDX,dword ptr [EBP + -0x4]
004c9a46  MOV word ptr [EDX + 0xa8],0x1e
004c9a4f  MOV EAX,dword ptr [EBP + -0x4]
004c9a52  MOV word ptr [EAX + 0xae],0x23
004c9a5b  MOV ECX,dword ptr [EBP + -0x4]
004c9a5e  MOV word ptr [ECX + 0xb4],0x14
004c9a67  MOV EDX,dword ptr [EBP + -0x4]
004c9a6a  MOV word ptr [EDX + 0x9e],0x1
004c9a73  MOV EAX,dword ptr [EBP + -0x4]
004c9a76  MOV word ptr [EAX + 0xa4],0xe
004c9a7f  MOV ECX,dword ptr [EBP + -0x4]
004c9a82  MOV word ptr [ECX + 0xaa],0x19
004c9a8b  MOV EDX,dword ptr [EBP + -0x4]
004c9a8e  MOV word ptr [EDX + 0xb0],0x1e
004c9a97  MOV EAX,dword ptr [EBP + -0x4]
004c9a9a  MOV word ptr [EAX + 0xb6],0x1e
004c9aa3  MOV ECX,dword ptr [EBP + -0x4]
004c9aa6  MOVSX EDX,word ptr [ECX + 0x9a]
004c9aad  MOV EAX,dword ptr [EBP + -0x4]
004c9ab0  MOVSX ECX,word ptr [EAX + 0xa0]
004c9ab7  ADD EDX,ECX
004c9ab9  MOV EAX,dword ptr [EBP + -0x4]
004c9abc  MOVSX ECX,word ptr [EAX + 0xa6]
004c9ac3  ADD EDX,ECX
004c9ac5  MOV EAX,dword ptr [EBP + -0x4]
004c9ac8  MOVSX ECX,word ptr [EAX + 0xac]
004c9acf  ADD EDX,ECX
004c9ad1  MOV EAX,dword ptr [EBP + -0x4]
004c9ad4  MOVSX ECX,word ptr [EAX + 0xb2]
004c9adb  ADD EDX,ECX
004c9add  CMP EDX,0x64
004c9ae0  JZ 0x004c9af9
004c9ae2  PUSH 0x63f
004c9ae7  PUSH 0x6bf384
004c9aec  PUSH 0x6bf660
004c9af1  CALL 0x005e9f20
004c9af6  ADD ESP,0xc
004c9af9  MOV EAX,dword ptr [EBP + -0x4]
004c9afc  MOVSX ECX,word ptr [EAX + 0x9c]
004c9b03  MOV EDX,dword ptr [EBP + -0x4]
004c9b06  MOVSX EAX,word ptr [EDX + 0xa2]
004c9b0d  ADD ECX,EAX
004c9b0f  MOV EDX,dword ptr [EBP + -0x4]
004c9b12  MOVSX EAX,word ptr [EDX + 0xa8]
004c9b19  ADD ECX,EAX
004c9b1b  MOV EDX,dword ptr [EBP + -0x4]
004c9b1e  MOVSX EAX,word ptr [EDX + 0xae]
004c9b25  ADD ECX,EAX
004c9b27  MOV EDX,dword ptr [EBP + -0x4]
004c9b2a  MOVSX EAX,word ptr [EDX + 0xb4]
004c9b31  ADD ECX,EAX
004c9b33  CMP ECX,0x64
004c9b36  JZ 0x004c9b4f
004c9b38  PUSH 0x640
004c9b3d  PUSH 0x6bf384
004c9b42  PUSH 0x6bf5e8
004c9b47  CALL 0x005e9f20
004c9b4c  ADD ESP,0xc
004c9b4f  MOV EDX,dword ptr [EBP + -0x4]
004c9b52  MOVSX EAX,word ptr [EDX + 0x9e]
004c9b59  MOV ECX,dword ptr [EBP + -0x4]
004c9b5c  MOVSX EDX,word ptr [ECX + 0xa4]
004c9b63  ADD EAX,EDX
004c9b65  MOV ECX,dword ptr [EBP + -0x4]
004c9b68  MOVSX EDX,word ptr [ECX + 0xaa]
004c9b6f  ADD EAX,EDX
004c9b71  MOV ECX,dword ptr [EBP + -0x4]
004c9b74  MOVSX EDX,word ptr [ECX + 0xb0]
004c9b7b  ADD EAX,EDX
004c9b7d  MOV ECX,dword ptr [EBP + -0x4]
004c9b80  MOVSX EDX,word ptr [ECX + 0xb6]
004c9b87  ADD EAX,EDX
004c9b89  CMP EAX,0x64
004c9b8c  JZ 0x004c9ba5
004c9b8e  PUSH 0x641
004c9b93  PUSH 0x6bf384
004c9b98  PUSH 0x6bf570
004c9b9d  CALL 0x005e9f20
004c9ba2  ADD ESP,0xc
004c9ba5  MOV ESP,EBP
004c9ba7  POP EBP
004c9ba8  RET 0x4
