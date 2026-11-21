// FUN_0064c1a0  0064c1a0

void __fastcall FUN_0064c1a0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*DAT_0162ee80 + 0x1d8))
                    (*(undefined4 *)(*(int *)(param_1[0x77] + 4) + 4),(char)param_1[0x78]);
  (**(code **)(*param_1 + 0x48))(uVar1);
  uVar1 = (**(code **)(*DAT_0162ee80 + 0x1dc))
                    (*(undefined4 *)(*(int *)(param_1[0x77] + 4) + 4),(char)param_1[0x78]);
  (**(code **)(*param_1 + 0x50))(uVar1);
  FUN_00602500();
  return;
}

