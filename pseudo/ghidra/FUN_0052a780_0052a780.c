// FUN_0052a780  0052a780

void FUN_0052a780(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_var;
  
  uVar3 = *(undefined4 *)(DAT_007947e0 + 0x4f14);
  iVar1 = (**(code **)(*DAT_00793394 + 0x38))();
  if (iVar1 == 1) {
    *(undefined4 *)(extraout_var + 0x100) = 0;
    iVar1 = extraout_var;
    iVar2 = (**(code **)(*DAT_00793394 + 0x40))();
    iVar2 = (-(uint)(iVar2 != 5) & 0xfffffffd) + 0x35;
    *(int *)(iVar1 + 0x104) = iVar2;
    *(int *)(iVar1 + 0x108) = iVar2;
    *(int *)(iVar1 + 0x10c) = iVar2;
    uVar3 = FUN_0052d0e0(iVar1,iVar2,uVar3);
    *(undefined4 *)(iVar1 + 0x124) = uVar3;
    uVar3 = FUN_0052d100();
    *(undefined4 *)(iVar1 + 0x168) = uVar3;
    *(undefined4 *)(iVar1 + 0x110) = 0x30efbc;
    *(undefined4 *)(iVar1 + 0x114) = 0x30efc1;
    *(undefined4 *)(iVar1 + 0x118) = 0x30efbd;
    *(undefined4 *)(iVar1 + 0x11c) = 0x30efc4;
    *(undefined4 *)(iVar1 + 0x120) = 0x30efbe;
    *(undefined4 *)(iVar1 + 0x144) = 0x30efc2;
    *(undefined4 *)(iVar1 + 0x148) = 0x30efc3;
    *(undefined4 *)(iVar1 + 0x154) = 0x30f025;
    *(undefined4 *)(iVar1 + 0x158) = 0x30f020;
    *(undefined4 *)(iVar1 + 0x15c) = 0x30f023;
    *(undefined4 *)(iVar1 + 0x160) = 0x30f024;
    *(undefined4 *)(iVar1 + 0x164) = 0x30f022;
    *(undefined4 *)(iVar1 + 0x16c) = 0x15fca;
    *(undefined4 *)(iVar1 + 0x170) = 0x15fcb;
    *(undefined4 *)(iVar1 + 0x174) = 0x15fcc;
    *(undefined1 *)(iVar1 + 0x128) = 0;
    *(undefined1 *)(iVar1 + 0x129) = 0;
    *(undefined4 *)(iVar1 + 0x14c) = 0x16008;
    *(undefined4 *)(iVar1 + 0x150) = 0x1600a;
  }
  else {
    *(undefined4 *)(extraout_var + 0x100) = 10;
    *(undefined4 *)(extraout_var + 0x104) = 0;
    *(undefined4 *)(extraout_var + 0x108) = 0;
    *(undefined4 *)(extraout_var + 0x10c) = 0;
    iVar1 = extraout_var;
    uVar3 = FUN_0052d0e0();
    *(undefined4 *)(iVar1 + 0x124) = uVar3;
    uVar3 = FUN_0052d100();
    *(undefined4 *)(iVar1 + 0x168) = uVar3;
    *(undefined4 *)(iVar1 + 0x110) = 0x15f98;
    *(undefined4 *)(iVar1 + 0x114) = 0x15fd2;
    *(undefined4 *)(iVar1 + 0x118) = 0x15f97;
    *(undefined4 *)(iVar1 + 0x11c) = 0x30efc4;
    *(undefined4 *)(iVar1 + 0x120) = 0x15fc3;
    *(undefined1 *)(iVar1 + 0x128) = 1;
    *(undefined4 *)(iVar1 + 300) = 0x15feb;
    *(undefined4 *)(iVar1 + 0x130) = 0x15feb;
    *(undefined4 *)(iVar1 + 0x134) = 0x15fef;
    *(undefined1 *)(iVar1 + 0x129) = 1;
    *(undefined4 *)(iVar1 + 0x138) = 0x15fea;
    *(undefined4 *)(iVar1 + 0x13c) = 0x15fea;
    *(undefined4 *)(iVar1 + 0x140) = 0x15fee;
    *(undefined4 *)(iVar1 + 0x144) = 0x15fc1;
    *(undefined4 *)(iVar1 + 0x148) = 0x15f9e;
    *(undefined4 *)(iVar1 + 0x14c) = 0x16008;
    *(undefined4 *)(iVar1 + 0x150) = 0x1600a;
    *(undefined4 *)(iVar1 + 0x154) = 0x15f91;
    *(undefined4 *)(iVar1 + 0x158) = 0x15f92;
    *(undefined4 *)(iVar1 + 0x15c) = 0x15f93;
    *(undefined4 *)(iVar1 + 0x160) = 0x15f94;
    *(undefined4 *)(iVar1 + 0x164) = 0x15f95;
    *(undefined4 *)(iVar1 + 0x16c) = 0x15fca;
    *(undefined4 *)(iVar1 + 0x170) = 0x15fcb;
    *(undefined4 *)(iVar1 + 0x174) = 0x15fcc;
  }
  return;
}

