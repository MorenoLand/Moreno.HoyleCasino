// FUN_00474e53  00474e53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00474e53(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  int iVar3;
  int iVar4;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar5;
  char *unaff_EBP;
  undefined8 uVar6;
  undefined4 uVar7;
  
  *unaff_EBP = *unaff_EBP + (char)unaff_EBP;
  FUN_004da300();
  uVar7 = 0;
  FUN_0047e3d0((int)*(short *)(in_EAX + -0xa8));
  FUN_004da3c0(uVar7);
  iVar1 = FUN_0047e3d0((int)*(short *)(in_EAX + -0xa8));
  *(undefined4 *)(in_EAX + -0xc0) = *(undefined4 *)(iVar1 + 4);
  uVar7 = 0;
  iVar1 = FUN_004f79b0(CONCAT22(extraout_var_00,*(undefined2 *)(in_EAX + -0xa8)),0);
  iVar2 = FUN_0047bc20(uVar7);
  uVar6 = FUN_0064c8a0(iVar1 * iVar2);
  *(undefined8 *)(in_EAX + -0x158) = uVar6;
  *(undefined4 *)(in_EAX + -0x1c) = *(undefined4 *)(in_EAX + -0x158);
  *(undefined4 *)(in_EAX + -0x18) = *(undefined4 *)(in_EAX + -0x154);
  FUN_005e7e40(*(undefined4 *)(in_EAX + -0xc0),7,*(undefined4 *)(in_EAX + -0x1c),
               *(undefined4 *)(in_EAX + -0x18));
  if (*(short *)(in_EAX + -0xa4) != -5) goto LAB_00475019;
  uVar5 = 0xffff;
  if (DAT_007912ea == '\0') {
LAB_00474f80:
    if (DAT_007912ea != '\0') {
      iVar1 = FUN_004f79b0(CONCAT22(uVar5,*(undefined2 *)(in_EAX + -0xa8)),0);
      iVar2 = FUN_0062fbf0((int)(DAT_00791308 + (DAT_00791308 >> 0x1f & 3U)) >> 2);
      iVar3 = FUN_0062fbf0((int)(DAT_00791308 + (DAT_00791308 >> 0x1f & 3U)) >> 2);
      iVar4 = FUN_0047bce0();
      if (iVar1 < (iVar2 + 3 + iVar3) * iVar4) {
        DAT_00791300 = 10;
        goto LAB_00475001;
      }
    }
    DAT_00791300 = 8;
  }
  else {
    iVar1 = FUN_004f79b0(CONCAT22(extraout_var,*(undefined2 *)(in_EAX + -0xa8)),0);
    iVar2 = FUN_0062fbf0(DAT_00791308 << 1);
    iVar3 = FUN_0062fbf0(DAT_00791308 << 1);
    iVar4 = FUN_0047bde0();
    uVar5 = extraout_var_01;
    if (iVar1 <= (iVar2 + 5 + iVar3) * iVar4) goto LAB_00474f80;
    DAT_00791300 = 0xb;
  }
LAB_00475001:
  _DAT_00791304 = FUN_0047e490((int)*(short *)(in_EAX + -0xa8));
LAB_00475019:
  DAT_007912ea = 0;
  (**(code **)(**(int **)(in_EAX + -0x25c) + 4))(0x21);
  (**(code **)(**(int **)(in_EAX + -0x25c) + 0x1c))(0x1e);
  ExceptionList = *(void **)(in_EAX + -0xc);
  return;
}

