// FUN_0042be80  0042be80

void __thiscall FUN_0042be80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  if (*(int *)(param_1 + 4) != 4) {
    uVar1 = FUN_00639110(*(undefined4 *)(param_1 + 4));
    FUN_00646380(100);
    uVar2 = (**(code **)(*DAT_0162ee80 + 0x1c8))(*(undefined4 *)(param_1 + 4),param_1,uVar1);
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = (**(code **)(*DAT_0162ee80 + 0x1c4))(uVar1,uVar2);
    FUN_00646150(uVar2,uVar1);
  }
  return;
}

