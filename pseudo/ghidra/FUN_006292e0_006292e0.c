// FUN_006292e0  006292e0

void __thiscall FUN_006292e0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  byte extraout_var;
  byte extraout_var_00;
  undefined4 uVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  
  if ((-1 < param_2) && (iVar2 = (**(code **)(*param_1 + 0xbc))(), param_2 < iVar2)) {
    uVar8 = 0;
    pTVar7 = &sciListBoxText::RTTI_Type_Descriptor;
    pTVar6 = &sciObject::RTTI_Type_Descriptor;
    uVar5 = 0;
    uVar3 = FUN_0060ca40(param_2);
    __RTDynamicCast(uVar3,uVar5,pTVar6,pTVar7,uVar8);
    cVar1 = FUN_005f54c0();
    if (cVar1 == '\0') {
      uVar8 = 0;
      pTVar7 = &sciListBoxText::RTTI_Type_Descriptor;
      pTVar6 = &sciObject::RTTI_Type_Descriptor;
      uVar5 = 0;
      uVar3 = FUN_0060ca40(param_2);
      piVar4 = (int *)__RTDynamicCast(uVar3,uVar5,pTVar6,pTVar7,uVar8);
      uVar3 = (**(code **)(*piVar4 + 0xb8))();
      iVar2 = (**(code **)(*param_1 + 0xec))(uVar3);
      if (iVar2 != -1) {
        cVar1 = FUN_00629080(iVar2);
        if (cVar1 == '\0') {
          piVar4 = (int *)FUN_0060ca40(param_2);
          iVar2 = FUN_005f53c0(0);
          (**(code **)(*piVar4 + 0xc4))(uVar3,param_1[0x2c],(uint)extraout_var << 0x18,iVar2 + 2);
        }
        else {
          cVar1 = FUN_00629000(iVar2);
          if (cVar1 == '\0') {
            piVar4 = (int *)FUN_0060ca40(param_2);
            iVar2 = FUN_005f53c0(0);
            (**(code **)(*piVar4 + 0xc4))
                      (uVar3,param_1[0x2a],(uint)extraout_var_00 << 0x18,iVar2 + 2);
          }
          else {
            piVar4 = (int *)FUN_0060ca40(param_2);
            iVar2 = FUN_005f53c0(1);
            (**(code **)(*piVar4 + 0xc4))
                      (uVar3,param_1[0x2b],
                       CONCAT13((char)((uint)(param_1 + 0x2d) >> 0x18),(int3)param_1[0x2d]),
                       iVar2 + 2);
          }
        }
      }
    }
  }
  return;
}

