#pragma once //�ѹ��� ������ �ϵ��� ���ش�.

/*
ĸ��ȭ
��ü�� ���� �����ο� �ܺ� ����� �κ��� �и�
���δ� �����Ͽ� �������ְ�
����� �κи� �����Ͽ� ��뿡 �����ϵ��� ��
*/ 

/*
Ŭ���� �̸�: Counter
-���ڸ� 1�� ������ų�� �ִ�.(�Է°� : X ��°� : X)
-0���� �ʱ�ȭ�� �Ҽ��ִ� (�Է°� : X ��°� : X)
-���� ī������ ���� �˷��ش� (�Է°� : X ��°� : count)
*/
class Counter
{
	int Count;

	
public:
	Counter() : count{ 0 }// ()��� ���������� {}�� ����ϸ� ��Ȯ�� ���� �����ؾ� �ϱ� ������ �����ϴ�
	{
		count = 0;
	}
	int count; //ī���� �ϴ� ���� ����
	// count�� 1�� ����.
	void counting()
	{
		count++;
	}
	// count �� 0���� �ʱ�ȭ.
	void reset()
	{
		count = 0;
	}
	//count ���� �˷��ش�.
	int getCount()
	{
		return count;
	}
public :// �������� ����
private://���ٺҰ���
protected: //
	
};