// FUN_0044d510  0044d510

void __thiscall FUN_0044d510(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == '\0') {
    puVar1 = (undefined4 *)
             (*(int *)(param_1 + 8 + (param_2 * 3 + *(int *)(param_1 + 0xd4)) * 4) + 0x48 +
             param_2 * 0x20);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    FUN_005dcb00(param_2,uVar2,uVar3);
    FUN_005d5cf0(uVar2,uVar3);
    FUN_005cb9b0();
  }
  return;
}

