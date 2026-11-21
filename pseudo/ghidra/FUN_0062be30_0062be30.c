// FUN_0062be30  0062be30

uint __thiscall FUN_0062be30(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    fclose(*(FILE **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  uVar1 = FUN_005ea9c0(param_2,&DAT_006d9768);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    param_1 = param_1 & 0xffffff00;
  }
  else {
    pvVar2 = operator_new(0x18);
    *(void **)(param_1 + 0x10) = pvVar2;
    **(undefined4 **)(param_1 + 0x10) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = 0x465250;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 8) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10) = 0x28;
    *(int *)(*(int *)(param_1 + 0x10) + 0xc) = *(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x18;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = 0x18;
    pvVar2 = operator_new(*(uint *)(*(int *)(param_1 + 0x10) + 0x10));
    *(void **)(param_1 + 0x14) = pvVar2;
    **(undefined4 **)(param_1 + 0x14) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = 0x18;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14) = 0;
    param_1 = FUN_0062bf70();
  }
  return param_1;
}

