// FUN_00637910  00637910

int __fastcall FUN_00637910(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_006375b0();
  iVar1 = FUN_00639f50();
  if (iVar1 == -1) {
    uVar2 = (**(code **)(*param_1 + 0x17c))();
    uVar2 = FUN_0062fbf0(uVar2);
    iVar1 = (**(code **)(*param_1 + 0x180))(uVar2);
  }
  return iVar1;
}

