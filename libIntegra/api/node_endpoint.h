/* libIntegra modular audio framework
 *
 * Copyright (C) 2007 Birmingham City University
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, 
 * USA.
 */


#ifndef INTEGRA_NODE_ENDPOINT_API_H
#define INTEGRA_NODE_ENDPOINT_API_H

#include "common_typedefs.h"



namespace integra_api
{
	class IEndpointDefinition;
	class INode;
	class CValue;
	class CPath;


	/** \class INodeEndpoint node_endpoint.h "api/node_endpoint.h"
	 *  \brief represents a node endpoint
	 *
	 * Endpoints are the controls and stream i/o of Integra Modules.
	 *
	 * INodeEndpoint provides methods to query the endpoints of nodes (Module Instances)
	 */
	class INTEGRA_API INodeEndpoint
	{
		protected:

			INodeEndpoint() {}

		public: 
			
			virtual ~INodeEndpoint() {}

			virtual const INode &get_node() const = 0;
			virtual const IEndpointDefinition &get_endpoint_definition() const = 0;

			virtual const CValue *get_value() const = 0;
			virtual const CPath &get_path() const = 0;
	};


	typedef std::unordered_map<string, INodeEndpoint *> node_endpoint_map;
}



#endif
