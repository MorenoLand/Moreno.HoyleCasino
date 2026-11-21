// FUN_005e2e40  005e2e40

void FUN_005e2e40(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  uVar1 = FUN_006369b0(param_1);
  FUN_005dcb00(uVar1);
  iVar2 = FUN_005d52e0();
  if (iVar2 == 0) {
    FUN_005e9f20("cSettings","..\\Casino\\casinoshell.cpp",0xa6c);
  }
  for (local_8 = param_2; local_8 < 99; local_8 = local_8 + 1) {
    puVar4 = (undefined4 *)(iVar2 + 0x60 + (local_8 + 1) * 0x24);
    puVar5 = (undefined4 *)(iVar2 + 0x60 + local_8 * 0x24);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined1 *)(iVar2 + 0xe4c) = 0xff;
  *(undefined1 *)(iVar2 + 0xe4d) = 1;
  *(undefined1 *)(iVar2 + 0xe4e) = 1;
  *(undefined1 *)(iVar2 + 0xe4f) = 0;
  *(undefined1 *)(iVar2 + 0xe50) = 0;
  *(undefined4 *)(iVar2 + 0xe68) = 0;
  *(undefined4 *)(iVar2 + 0xe6c) = 0xfffffc18;
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined1 *)(iVar2 + local_8 + 0xe51) = 0;
  }
  uVar1 = FUN_006369b0(param_1);
  FUN_005dcb00(uVar1);
  FUN_0063b0a0();
  return;
}

