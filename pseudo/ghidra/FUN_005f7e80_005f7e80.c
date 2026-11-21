// FUN_005f7e80  005f7e80

void __thiscall FUN_005f7e80(int param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  undefined4 uVar10;
  int local_24;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 == 0) {
    FUN_005e9f20("false","..\\scilib\\sciplane.cpp",0x68);
  }
  else {
    if (*(int *)(param_2 + 0x18) == 3) {
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 0xc);
    }
    cVar2 = FUN_005f88f0();
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x16c) != 0) {
        cVar2 = FUN_0060c9e0(*(undefined4 *)(param_1 + 0x16c));
        if (cVar2 == '\0') {
          FUN_005e9f20("false","..\\scilib\\sciplane.cpp",0x77);
          FUN_005f89f0(0);
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x16c) + 0x3c))(param_2);
        }
      }
      iVar3 = FUN_0060c9a0();
      if (*(int *)(param_1 + 0x150) < iVar3) {
        if (*(int *)(param_1 + 0x14c) != 0) {
          operator_delete(*(void **)(param_1 + 0x14c));
        }
        iVar3 = FUN_0060c9a0();
        if (iVar3 * 2 < 0x14) {
          local_24 = 0x14;
        }
        else {
          local_24 = FUN_0060c9a0();
          local_24 = local_24 << 1;
        }
        *(int *)(param_1 + 0x150) = local_24;
        lVar1 = (ulonglong)*(uint *)(param_1 + 0x150) * 4;
        pvVar4 = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
        *(void **)(param_1 + 0x14c) = pvVar4;
      }
      local_8 = 0;
      *(undefined4 *)(param_1 + 0x154) = 0;
      for (; iVar3 = FUN_0060c9a0(), local_8 < iVar3; local_8 = local_8 + 1) {
        uVar10 = 0;
        pTVar9 = &sciFeature::RTTI_Type_Descriptor;
        pTVar8 = &sciObject::RTTI_Type_Descriptor;
        uVar7 = 0;
        uVar5 = FUN_0060ca40(local_8);
        iVar3 = __RTDynamicCast(uVar5,uVar7,pTVar8,pTVar9,uVar10);
        if ((iVar3 != 0) && (cVar2 = FUN_005f5600(), cVar2 == '\0')) {
          *(int *)(*(int *)(param_1 + 0x14c) + *(int *)(param_1 + 0x154) * 4) = iVar3;
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
        }
      }
      for (local_8 = 0; local_8 < *(int *)(param_1 + 0x154); local_8 = local_8 + 1) {
        if (*(int *)(*(int *)(param_1 + 0x14c) + local_8 * 4) != 0) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x14c) + local_8 * 4) + 0x3c))(param_2);
        }
      }
      *(undefined4 *)(param_1 + 0x154) = 0;
      iVar3 = *(int *)(param_2 + 0x18);
      if (iVar3 == 1) {
        if (*(int *)(param_1 + 0x1a4) != 0) {
          FUN_005f3f70(param_1);
          FUN_005f3ee0(param_1);
          FUN_005f9a80();
          if ((((*(char *)(param_1 + 0x124) == '\0') &&
               (*(int *)(param_2 + 0xc) <= *(int *)(param_1 + 0x120))) &&
              (-1 < *(int *)(param_2 + 0xc))) &&
             ((iVar3 = FUN_005f8550(), *(int *)(param_2 + 8) <= iVar3 + -4 &&
              (-1 < *(int *)(param_2 + 8))))) {
            *(undefined1 *)(param_1 + 0x124) = 1;
            *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 8);
            *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0xc);
            FUN_005f41c0(param_1);
            *(undefined1 *)(param_2 + 4) = 1;
          }
        }
      }
      else if (iVar3 == 2) {
        if (*(char *)(param_1 + 0x124) != '\0') {
          *(undefined1 *)(param_1 + 0x124) = 0;
          FUN_005f41c0(0);
          *(undefined1 *)(param_2 + 4) = 1;
        }
      }
      else if ((iVar3 == 3) && (*(char *)(param_1 + 0x124) != '\0')) {
        local_10 = FUN_005f84d0();
        local_10 = local_10 - (*(int *)(param_1 + 0x130) - *(int *)(param_2 + 8));
        local_c = FUN_005f84f0();
        local_c = local_c - (*(int *)(param_1 + 0x134) - *(int *)(param_2 + 0xc));
        if (local_10 < 0) {
          local_10 = 0;
        }
        if (local_c < 0) {
          local_c = 0;
        }
        iVar3 = FUN_005f8590();
        iVar6 = FUN_005f8550();
        if (iVar6 < iVar3 + local_10) {
          local_10 = FUN_005f8550();
          iVar3 = FUN_005f8590();
          local_10 = local_10 - iVar3;
        }
        iVar3 = FUN_005f85b0();
        iVar6 = FUN_005f8570();
        if (iVar6 < iVar3 + local_c) {
          local_c = FUN_005f8570();
          iVar3 = FUN_005f85b0();
          local_c = local_c - iVar3;
        }
        FUN_005f8420(local_10,local_c);
        *(undefined1 *)(param_2 + 4) = 1;
      }
    }
  }
  return;
}

