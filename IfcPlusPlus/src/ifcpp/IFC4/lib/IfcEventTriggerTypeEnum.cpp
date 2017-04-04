/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcEventTriggerTypeEnum.h"

// TYPE IfcEventTriggerTypeEnum = ENUMERATION OF	(EVENTRULE	,EVENTMESSAGE	,EVENTTIME	,EVENTCOMPLEX	,USERDEFINED	,NOTDEFINED);
IfcEventTriggerTypeEnum::IfcEventTriggerTypeEnum() {}
IfcEventTriggerTypeEnum::~IfcEventTriggerTypeEnum() {}
shared_ptr<IfcPPObject> IfcEventTriggerTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcEventTriggerTypeEnum> copy_self( new IfcEventTriggerTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcEventTriggerTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCEVENTTRIGGERTYPEENUM("; }
	if( m_enum == ENUM_EVENTRULE )
	{
		stream << ".EVENTRULE.";
	}
	else if( m_enum == ENUM_EVENTMESSAGE )
	{
		stream << ".EVENTMESSAGE.";
	}
	else if( m_enum == ENUM_EVENTTIME )
	{
		stream << ".EVENTTIME.";
	}
	else if( m_enum == ENUM_EVENTCOMPLEX )
	{
		stream << ".EVENTCOMPLEX.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcEventTriggerTypeEnum> IfcEventTriggerTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcEventTriggerTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcEventTriggerTypeEnum>(); }
	shared_ptr<IfcEventTriggerTypeEnum> type_object( new IfcEventTriggerTypeEnum() );
	if( boost::iequals( arg, L".EVENTRULE." ) )
	{
		type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_EVENTRULE;
	}
	else if( boost::iequals( arg, L".EVENTMESSAGE." ) )
	{
		type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_EVENTMESSAGE;
	}
	else if( boost::iequals( arg, L".EVENTTIME." ) )
	{
		type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_EVENTTIME;
	}
	else if( boost::iequals( arg, L".EVENTCOMPLEX." ) )
	{
		type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_EVENTCOMPLEX;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}