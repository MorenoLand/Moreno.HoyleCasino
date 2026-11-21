// FUN_0068f580  0068f580

undefined4 __thiscall FUN_0068f580(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ae2a0;
  local_10 = ExceptionList;
  if (*(char *)((int)param_2 + 0x45) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_0068ecb0(*(undefined4 *)(param_1 + 4),param_3,*(undefined4 *)(param_1 + 4),
                          param_2 + 3,*(undefined1 *)(param_2 + 0x11));
    local_8 = 0;
    uVar3 = *param_2;
    uVar2 = FUN_0068f580(uVar3,puVar1);
    *puVar1 = uVar2;
    puVar4 = puVar1;
    uVar2 = FUN_0068f580(param_2[2],puVar1);
    puVar1[2] = uVar2;
    uVar3 = FUN_0068f66a(puVar4,uVar3);
    return uVar3;
  }
  return *(undefined4 *)(param_1 + 4);
}

