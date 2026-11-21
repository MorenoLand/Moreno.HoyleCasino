// FUN_00531c90  00531c90

void __thiscall FUN_00531c90(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x188) + 0x70))();
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x188) + 0xb4))(param_2);
  iVar1 = FUN_005ef050();
  *(int *)(param_1 + 400) = iVar1 + 3;
  FUN_005ecc60(*(undefined4 *)(param_1 + 400));
  *(int *)(param_1 + 0x194) =
       ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)) - *(int *)(param_1 + 400)) / 2 +
       *(int *)(param_1 + 0x10);
  (**(code **)(**(int **)(param_1 + 0x188) + 0x44))
            (*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x14));
  (**(code **)(**(int **)(param_1 + 0x188) + 0x74))();
  FUN_005eb570();
  uVar2 = FUN_005f3e50();
  *(undefined4 *)(param_1 + 0x19c) = uVar2;
  return;
}

