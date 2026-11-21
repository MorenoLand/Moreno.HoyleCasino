// FUN_00480c10  00480c10

void __thiscall FUN_00480c10(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_007947e0 + 0x4f00);
  }
  FUN_00520790(*(undefined4 *)(DAT_007947e0 + 0x4efc),uVar1,uVar1,param_1);
  *(char *)(DAT_007947e0 + 0x4f04) = param_2;
  return;
}

