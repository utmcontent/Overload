/**
* @project: Overload
* @author: Overload Tech.
* @restrictions: This software may not be resold, redistributed or otherwise conveyed to a third party.
*/

#pragma once

#include "OvUI/Widgets/AWidget.h"
#include "OvUI/Widgets/DataWidget.h"

namespace OvUI::Widgets::Texts
{
	/**
	* Simple widget to display text on a panel
	*/
	class API_OVUI Text : public DataWidget<std::string>
	{
	public:
		/**
		* Constructor
		* @param p_content
		*/
		Text(const std::string& p_content = "");

	protected:
		virtual void _Draw_Impl() override;

	public:
		std::string content;
	};
}