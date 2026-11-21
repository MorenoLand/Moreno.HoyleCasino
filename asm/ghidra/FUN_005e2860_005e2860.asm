; FUN_005e2860  005e2860
005e2860  PUSH EBP
005e2861  MOV EBP,ESP
005e2863  SUB ESP,0x24
005e2866  MOV dword ptr [EBP + -0x20],ECX
005e2869  MOV ECX,dword ptr [EBP + -0x20]
005e286c  CALL 0x005e10d0
005e2871  MOV dword ptr [EBP + -0x18],EAX
005e2874  MOV dword ptr [EBP + -0x4],0x0
005e287b  MOV dword ptr [EBP + -0x14],0x0
005e2882  MOV dword ptr [EBP + -0x10],0x0
005e2889  MOV dword ptr [EBP + -0x8],0x0
005e2890  MOV EAX,dword ptr [EBP + 0x8]
005e2893  MOVSX ECX,byte ptr [EAX]
005e2896  CMP ECX,0x3
005e2899  JG 0x005e294d
005e289f  MOV dword ptr [EBP + -0xc],0x0
005e28a6  JMP 0x005e28b1
005e28a8  MOV EDX,dword ptr [EBP + -0xc]
005e28ab  ADD EDX,0x1
005e28ae  MOV dword ptr [EBP + -0xc],EDX
005e28b1  CMP dword ptr [EBP + -0xc],0x14
005e28b5  JGE 0x005e28d4
005e28b7  MOV EAX,dword ptr [EBP + 0x8]
005e28ba  ADD EAX,dword ptr [EBP + -0xc]
005e28bd  MOVSX ECX,byte ptr [EAX + 0x5]
005e28c1  TEST ECX,ECX
005e28c3  JZ 0x005e28d0
005e28c5  MOV EDX,dword ptr [EBP + -0x4]
005e28c8  ADD EDX,0x1
005e28cb  MOV dword ptr [EBP + -0x4],EDX
005e28ce  JMP 0x005e28d2
005e28d0  JMP 0x005e28d4
005e28d2  JMP 0x005e28a8
005e28d4  MOV dword ptr [EBP + -0xc],0x0
005e28db  JMP 0x005e28e6
005e28dd  MOV EAX,dword ptr [EBP + -0xc]
005e28e0  ADD EAX,0x1
005e28e3  MOV dword ptr [EBP + -0xc],EAX
005e28e6  CMP dword ptr [EBP + -0xc],0x14
005e28ea  JGE 0x005e2935
005e28ec  MOV dword ptr [EBP + -0x1c],0x0
005e28f3  JMP 0x005e28fe
005e28f5  MOV ECX,dword ptr [EBP + -0x1c]
005e28f8  ADD ECX,0x1
005e28fb  MOV dword ptr [EBP + -0x1c],ECX
005e28fe  MOV EDX,dword ptr [EBP + -0x1c]
005e2901  CMP EDX,dword ptr [EBP + -0x4]
005e2904  JGE 0x005e2933
005e2906  MOV EAX,dword ptr [EBP + 0x8]
005e2909  ADD EAX,dword ptr [EBP + -0x1c]
005e290c  MOVSX ECX,byte ptr [EAX + 0x5]
005e2910  MOV EDX,dword ptr [EBP + -0x18]
005e2913  IMUL EDX,EDX,0x14
005e2916  ADD EDX,dword ptr [EBP + -0xc]
005e2919  MOV EAX,dword ptr [EBP + -0x20]
005e291c  MOVSX EDX,byte ptr [EAX + EDX*0x1 + 0x9c]
005e2924  CMP ECX,EDX
005e2926  JNZ 0x005e2931
005e2928  MOV EAX,dword ptr [EBP + -0x14]
005e292b  ADD EAX,0x1
005e292e  MOV dword ptr [EBP + -0x14],EAX
005e2931  JMP 0x005e28f5
005e2933  JMP 0x005e28dd
005e2935  MOV ECX,dword ptr [EBP + -0x14]
005e2938  PUSH ECX
005e2939  PUSH 0x9
005e293b  PUSH 0x0
005e293d  MOV ECX,dword ptr [0x0079506c]
005e2943  CALL 0x005e7e00
005e2948  JMP 0x005e2b60
005e294d  MOV EDX,dword ptr [EBP + 0x8]
005e2950  MOV AL,byte ptr [EDX]
005e2952  MOV byte ptr [EBP + -0x24],AL
005e2955  CMP byte ptr [EBP + -0x24],0x4
005e2959  JZ 0x005e2974
005e295b  CMP byte ptr [EBP + -0x24],0x5
005e295f  JZ 0x005e2a5b
005e2965  CMP byte ptr [EBP + -0x24],0x6
005e2969  JZ 0x005e2acc
005e296f  JMP 0x005e2b60
005e2974  MOV dword ptr [EBP + -0xc],0x0
005e297b  JMP 0x005e2986
005e297d  MOV ECX,dword ptr [EBP + -0xc]
005e2980  ADD ECX,0x1
005e2983  MOV dword ptr [EBP + -0xc],ECX
005e2986  CMP dword ptr [EBP + -0xc],0x14
005e298a  JGE 0x005e2a43
005e2990  MOV EDX,dword ptr [EBP + -0x18]
005e2993  IMUL EDX,EDX,0x14
005e2996  ADD EDX,dword ptr [EBP + -0xc]
005e2999  MOV EAX,dword ptr [EBP + -0x20]
005e299c  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x9c]
005e29a4  CMP ECX,0x1
005e29a7  JLE 0x005e29c2
005e29a9  MOV EDX,dword ptr [EBP + -0x18]
005e29ac  IMUL EDX,EDX,0x14
005e29af  ADD EDX,dword ptr [EBP + -0xc]
005e29b2  MOV EAX,dword ptr [EBP + -0x20]
005e29b5  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x9c]
005e29bd  CMP ECX,0xa
005e29c0  JL 0x005e2a35
005e29c2  MOV EDX,dword ptr [EBP + -0x18]
005e29c5  IMUL EDX,EDX,0x14
005e29c8  ADD EDX,dword ptr [EBP + -0xc]
005e29cb  MOV EAX,dword ptr [EBP + -0x20]
005e29ce  MOVSX EAX,byte ptr [EAX + EDX*0x1 + 0x9c]
005e29d6  CDQ
005e29d7  MOV ECX,0xa
005e29dc  IDIV ECX
005e29de  CMP EDX,0x1
005e29e1  JZ 0x005e2a35
005e29e3  MOV EDX,dword ptr [EBP + -0x18]
005e29e6  IMUL EDX,EDX,0x14
005e29e9  ADD EDX,dword ptr [EBP + -0xc]
005e29ec  MOV EAX,dword ptr [EBP + -0x20]
005e29ef  MOVSX EAX,byte ptr [EAX + EDX*0x1 + 0x9c]
005e29f7  CDQ
005e29f8  MOV ECX,0xa
005e29fd  IDIV ECX
005e29ff  TEST EDX,EDX
005e2a01  JZ 0x005e2a35
005e2a03  MOV EDX,dword ptr [EBP + -0x18]
005e2a06  IMUL EDX,EDX,0x14
005e2a09  ADD EDX,dword ptr [EBP + -0xc]
005e2a0c  MOV EAX,dword ptr [EBP + -0x20]
005e2a0f  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x9c]
005e2a17  CMP ECX,0x47
005e2a1a  JLE 0x005e2a3e
005e2a1c  MOV EDX,dword ptr [EBP + -0x18]
005e2a1f  IMUL EDX,EDX,0x14
005e2a22  ADD EDX,dword ptr [EBP + -0xc]
005e2a25  MOV EAX,dword ptr [EBP + -0x20]
005e2a28  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x9c]
005e2a30  CMP ECX,0x50
005e2a33  JGE 0x005e2a3e
005e2a35  MOV EDX,dword ptr [EBP + -0x14]
005e2a38  ADD EDX,0x1
005e2a3b  MOV dword ptr [EBP + -0x14],EDX
005e2a3e  JMP 0x005e297d
005e2a43  MOV EAX,dword ptr [EBP + -0x14]
005e2a46  PUSH EAX
005e2a47  PUSH 0x9
005e2a49  PUSH 0x0
005e2a4b  MOV ECX,dword ptr [0x0079506c]
005e2a51  CALL 0x005e7e00
005e2a56  JMP 0x005e2b60
005e2a5b  MOV dword ptr [EBP + -0xc],0x0
005e2a62  JMP 0x005e2a6d
005e2a64  MOV ECX,dword ptr [EBP + -0xc]
005e2a67  ADD ECX,0x1
005e2a6a  MOV dword ptr [EBP + -0xc],ECX
005e2a6d  CMP dword ptr [EBP + -0xc],0x14
005e2a71  JGE 0x005e2aa2
005e2a73  MOV EDX,dword ptr [EBP + -0x18]
005e2a76  IMUL EDX,EDX,0x14
005e2a79  ADD EDX,dword ptr [EBP + -0xc]
005e2a7c  MOV EAX,dword ptr [EBP + -0x20]
005e2a7f  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x9c]
005e2a87  CMP ECX,0x29
005e2a8a  JGE 0x005e2a97
005e2a8c  MOV EDX,dword ptr [EBP + -0x14]
005e2a8f  ADD EDX,0x1
005e2a92  MOV dword ptr [EBP + -0x14],EDX
005e2a95  JMP 0x005e2aa0
005e2a97  MOV EAX,dword ptr [EBP + -0x10]
005e2a9a  ADD EAX,0x1
005e2a9d  MOV dword ptr [EBP + -0x10],EAX
005e2aa0  JMP 0x005e2a64
005e2aa2  MOV ECX,dword ptr [EBP + -0x14]
005e2aa5  SUB ECX,dword ptr [EBP + -0x10]
005e2aa8  PUSH ECX
005e2aa9  CALL 0x00686eba
005e2aae  ADD ESP,0x4
005e2ab1  MOV dword ptr [EBP + -0x8],EAX
005e2ab4  MOV EDX,dword ptr [EBP + -0x8]
005e2ab7  PUSH EDX
005e2ab8  PUSH 0x9
005e2aba  PUSH 0x0
005e2abc  MOV ECX,dword ptr [0x0079506c]
005e2ac2  CALL 0x005e7e00
005e2ac7  JMP 0x005e2b60
005e2acc  MOV dword ptr [EBP + -0xc],0x0
005e2ad3  JMP 0x005e2ade
005e2ad5  MOV EAX,dword ptr [EBP + -0xc]
005e2ad8  ADD EAX,0x1
005e2adb  MOV dword ptr [EBP + -0xc],EAX
005e2ade  CMP dword ptr [EBP + -0xc],0x14
005e2ae2  JGE 0x005e2b3b
005e2ae4  MOV ECX,dword ptr [EBP + -0x18]
005e2ae7  IMUL ECX,ECX,0x14
005e2aea  ADD ECX,dword ptr [EBP + -0xc]
005e2aed  MOV EDX,dword ptr [EBP + -0x20]
005e2af0  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x9c]
005e2af8  CDQ
005e2af9  MOV ECX,0xa
005e2afe  IDIV ECX
005e2b00  TEST EDX,EDX
005e2b02  JLE 0x005e2b30
005e2b04  MOV EDX,dword ptr [EBP + -0x18]
005e2b07  IMUL EDX,EDX,0x14
005e2b0a  ADD EDX,dword ptr [EBP + -0xc]
005e2b0d  MOV EAX,dword ptr [EBP + -0x20]
005e2b10  MOVSX EAX,byte ptr [EAX + EDX*0x1 + 0x9c]
005e2b18  CDQ
005e2b19  MOV ECX,0xa
005e2b1e  IDIV ECX
005e2b20  CMP EDX,0x6
005e2b23  JGE 0x005e2b30
005e2b25  MOV EDX,dword ptr [EBP + -0x14]
005e2b28  ADD EDX,0x1
005e2b2b  MOV dword ptr [EBP + -0x14],EDX
005e2b2e  JMP 0x005e2b39
005e2b30  MOV EAX,dword ptr [EBP + -0x10]
005e2b33  ADD EAX,0x1
005e2b36  MOV dword ptr [EBP + -0x10],EAX
005e2b39  JMP 0x005e2ad5
005e2b3b  MOV ECX,dword ptr [EBP + -0x14]
005e2b3e  SUB ECX,dword ptr [EBP + -0x10]
005e2b41  PUSH ECX
005e2b42  CALL 0x00686eba
005e2b47  ADD ESP,0x4
005e2b4a  MOV dword ptr [EBP + -0x8],EAX
005e2b4d  MOV EDX,dword ptr [EBP + -0x8]
005e2b50  PUSH EDX
005e2b51  PUSH 0x9
005e2b53  PUSH 0x0
005e2b55  MOV ECX,dword ptr [0x0079506c]
005e2b5b  CALL 0x005e7e00
005e2b60  MOV EAX,dword ptr [EBP + 0x8]
005e2b63  MOVSX ECX,byte ptr [EAX + 0x1]
005e2b67  PUSH ECX
005e2b68  MOV EDX,dword ptr [EBP + 0x8]
005e2b6b  CMP byte ptr [EDX + 0x3],0x0
005e2b6f  SETNZ AL
005e2b72  PUSH EAX
005e2b73  MOV ECX,dword ptr [EBP + -0x14]
005e2b76  PUSH ECX
005e2b77  MOV EDX,dword ptr [EBP + -0x4]
005e2b7a  PUSH EDX
005e2b7b  MOV EAX,dword ptr [EBP + 0x8]
005e2b7e  MOVSX ECX,byte ptr [EAX]
005e2b81  PUSH ECX
005e2b82  MOV ECX,dword ptr [EBP + -0x20]
005e2b85  CALL 0x005e15b0
005e2b8a  MOV ESP,EBP
005e2b8c  POP EBP
005e2b8d  RET 0x4
